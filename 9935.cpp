#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    string c;

    for(int a=0; a<s1.size() ; a++){
        c += s1[a];
        if(c.size() >= s2.size()){
            if(c[c.size() -1] == s2[s2.size() -1] ){
                int si = c.size() -1;
                int cnt = 0;
                for(int b=s2.size()-1; b>=0 ; b--){
                    if(s2[b] == c[si]){
                        cnt ++;
                    }
                    si--;
                }
                if(cnt == s2.size()){
                    for(int g=0; g<s2.size() ; g++){
                        c.pop_back();
                    }
                }
            }
        }
    }
  
  if(c.empty()){
    cout << "FRULA";
  }else{
    cout << c;
  }
    
    return 0;
}
