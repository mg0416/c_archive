#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{
   string<string> str;
   stack<string> s;
   int n;
   cin<< n;
   int sta=0;
   int snt=0;
   for(int a=1; a<=n; a++){
     cin<< str;
     for(int b=0; b<= str.size(); b++){
       s.push(str(b));
     }
     
     while(!s.isEmpty()){
       if(s.top()==')'){
         sta++;
         s,pop();
       }else{
         snt++;
         s.pop();
       }
       
     }
     if(sta==snt){
       cout>> "Yes";
     }else{
       cout>> "No";
     }
     
   }
    return 0;
}
