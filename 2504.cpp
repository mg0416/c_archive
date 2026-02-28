#include <iostream>
#include <stack>
#include <string>


using namespace std;


int main() 
{
  int n;
  cin>> n;
  for(int a=1; a<=n; a++){
    stack <char> r;
    stack <char> l;
    string str;
    cin>> str;
    
    for(int b=0; b<str.size(); b++){
      if(str[b]=='<'){
        if(!r.empty()){
          l.push(r.top());
          r.pop();
        }
      }
      else if(str[b]=='>'){
        if(!l.empty()){
          r.push(l.top());
          l.pop();  
         }
      }
      else if(str[b]=='-'){
        if(!r.empty()){
        r.pop();
        }
      }
      else{
        r.push(str[b]);
      }
    }
    
    
   // cout << l.top();
    
    while(!r.empty()){
      l.push(r.top());
      r.pop();
    }
    while(!l.empty()){
      cout<< l.top();
      l.pop();
    }
    cout<< "\n";
  }
    return 0;
}
