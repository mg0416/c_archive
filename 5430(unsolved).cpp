#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() 
{
  int n;
  cin >> n;

  for(int a=0; a<n; a++){
    string s1;
    cin >> s1; // "RDD" -> 'R' 'D' 'D'
    int num;
    cin >> num;
    deque <int> d;
    string s;
    cin >> s;
    s = s + ",";
    int len = s.size();
    string tmp = "";
    for(int a=0; a<len ; a++){
      if(s[a]>= '0' && s[a] <= '9'){
         tmp = tmp + s[a];
      }else if(s[a] == ','){
        d.push_back(stoi(tmp));
        tmp = "";
      }
    } // 덱 받기 

    for(int a=0; a<s1.size() ; a++){
      if(s1[a] == 'R'){
        for(int b=0; b<len-1; b++){
          int l = d.front();
          d.pop_front();
          d.push_back(l);
        }
       }else if(s1[a] == 'D'){
          if(d.empty()){
            cout << "error";
          }
          d.pop_front();
      }
    }

      cout << '[';
    for(int a=0; a<d.size(); a++){
      if(a+1 == d.size()){
        cout << d[a];
      }
      cout << d[a] << ',';
    }
    cout << ']';
 
  }
   
    
    return 0;
}
