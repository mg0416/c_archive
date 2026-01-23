# include <iostream>
# include <string>
# include <cctype>

 using namespace std;


int main(){
 string str;
  cin>> str;
  for(int a=0; a<str.size(); a++){
       int t= str[a];
       int sum = 0;

       while (t > 0){

          sum= sum+t/10+t&10;
            
             for(int l=1; l<=sum; l++){
                cout<<
             }
       }
       


  }


}

