#include <sstream>
  #include <iostream>
  #include <queue>
  #include <string>
  
  using namespace std;
  
  int main(){
     int n;
      cin >> n;
      cin.ignore();
      int sum=0;
  
      queue<string> b[100];
      queue<string> main;
  
      for (int i = 0; i < n; ++i) {//i가 queueb를 판별;;
          string s, word;
          getline(cin, s);
  
          istringstream iss(s);
  
          while (iss >> word) {
              b[i].push(word);
          }
      }
  
      {
          string s, word;
          getline(cin, s);
  
          istringstream iss(s);
  
          while (iss >> word) {
              main.push(word);
          }
      }
  
  // ------------- 
  int initMainSize = main.size();
  int i = 0;
  while(i++ < initMainSize){
  
  for(int a=0; a<n; a++){
    if(b[a].empty() || main.empty()) continue;
        if(b[a].front()==main.front()){
    
      b[a].pop();
      main.pop();
     
    }
   }
  }
  for(int d=0; d<n; d++){
    if(b[d].empty()){
        sum++;
    }
  }
  
  
  bool result = true;
  
  for(int i=0;i<n;i++) {
    if(!b[i].empty()) {
      result = false;
      break;
    }
  }
  
  
  if(!main.empty()) {
    result = false;
  }
  
  cout<<(result?"Possible":"Impossible");
  
  }
  
  
  
  
  
  
  
