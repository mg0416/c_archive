#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{
   stack <string> s;  
   string <string> str;
   int n=0;
   int h=0;
   cin>> str;
   while(!stack.isfull()){
     for(int a=1; a<str.size(); a++){
     stack.push(str(a));
     if(str(a)=='('){
       n=n+1;
     }
     }
   }
   for(int b=str.size; b>=1; b--){
     if(str(b)==')'){
       n--;
       stack.pop();
     }
   }
    return 0;
}
