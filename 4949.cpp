#include <iostream>
#include <stack>
#include <string>


using namespace std;



int main(){
  
  string <char> str;
  getline(cin,str);
   stack <string> s;
    stack <string> st;
  
  
  for(int a=0; a<str.size(); a++){
   
    if(str[a]=='('){
      s.push(str[a]);
    }
    if(str[a]=='['){
      st.push(str[a]);
    }
    if(str[a]==')' || s.top()==str[a]){
      s.pop();
    }
    if(str[a]==']' || st.top()==str[a]){
      st.pop();
    }
    if(str[a]=='\n'){
      if(s.empty()){
        cout>> "Yes";
      }else(!s.empty()){
        cout>> "No";
        while(!s.empty()){
          s.pop();
        }
      }
    }
  }
  
  
  
  
  
  
  
  
  
}

  
  
  
  
  
  
  
  
  
