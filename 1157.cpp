# include<iostream>
# include <string>
# include <cctype>


using namespace std;
int main(){
  
  string str;
  int cnt=0; // 큰수 받기
  int h=0; // 큰수의 개수
  char alphabet[26] = {0,};
  cin>>str;
   
    for(int k=0; k< str.size(); k++){
      if(isupper(str[k])!=0){
        str[k] += 32;
      }
    }     // 정렬(대문자를 소문자로)
    
    for(int w=0; w< str.size(); w++ ){
      alphabet[str[w] - 'a'] += 1;
    }
    
    int m = 0;
    int m_i=0;
     for(int q=0; q<=25; q++){
       if( alphabet[q]>m){
         m= alphabet[q];
         m_i=q;
       }
    }
    
    int c = 0;
    for(int q=0; q<=25; q++){
       if( alphabet[q]==m){
        c= c+1;
       }
    }
     
    
     if(c>=2){
       cout<< "?";
     }
     
     else {
      cout<< char('A' +m_i);
       
     }
}
    
    
