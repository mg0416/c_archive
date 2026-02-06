#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
 queue<string> q[100];
 int n;
 cin>>n;
 cin.ignore();
 int a;
 queue <string> main;
 int sum=0;
 
 for( a=0; a<n; a++){
   string str_a;
   getline(cin, str_a);
   string s;
   
   for(int c=0; c<= str_a.size(); c++){
     if (str_a[c]== ' '){
       q[a].push(s);
       s.clear();
       
     }else{
       s.push_back(str_a[c]);
     }
   }
   q[a].push(s);
   
 }
 
  string str_a;
   getline(cin, str_a);
   string s;
   
   for(int c=0; c<= str_a.size(); c++){
     if (str_a[c]== ' '){
       main.push(s);
       s.clear();
       
     }else{
       s.push_back(str_a[c]);
     }
   }
   main.push(s);
   
   
   //----------------------
  
    
     for(int d=0; d<=main.size(); d++){
        if(q[a].front()==main.front()){
          main.pop();
          q[a].pop();
        }
        else{
          sum++;
        }
    }
    if(sum!= 0){
      cout<< "Possible";
    }else{
      cout<< "Impossible";
    }
    
  
  return 0;
}
 
  
