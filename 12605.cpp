#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
  int n;
  cin>> n;
  
  for(int a=1; a<=n; a++){
    cout<< " case #" << a;
    stack<char> s;
    string str;
    getline(cin, str);
    for(int b=0; b<str.size(); b++){
      s.push(str[b]);
    }
    while(!s.empty()){
      cout<< s.top();
      s.pop();
    }
  }
  //인덱스 접근 & 단어를 안바꾸며 변환;;
  
  
  
  
  
  
  
  
  
}
