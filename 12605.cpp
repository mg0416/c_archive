#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main(){
  int n;
  cin>> n;

  cin.ignore();
  
  for(int a=1; a<=n; a++){
    cout<< "Case #" << a<<":";
    stack<string> s;
    string str;
    getline(cin, str);
    
    string temp;
    
    // "this" , "is", "a", "test"
    stringstream ss(str);
  
      while(ss>> temp){
        s.push(temp);
      }
      
      
      while(!s.empty()){
        cout<<' ' << s.top();
        s.pop();
      }
      cout<< '\n';
  }
  
}
   
    
    
    
     
  
  
  
  
  
  
  
  
  
}
