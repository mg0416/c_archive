#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

 string str;
 getline(cin, str);

  while (str != ".") {
     stack<char> s;
    for (int i = 0; i < str.size(); i++) {
       if (str[i] == '(' || str[i] == '[') {
          s.push(str[i]);
            }
      else if (str[i] == ')') {
         if (!s.empty() && s.top() == '(') {
            s.pop();

        }else{
          s.push(str[i]);
        }
            }
      else if (str[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                  s.pop();
                }else{
                  s.push(str[i]);
                }
            }
        }

        if (s.empty()){
          cout << "yes"<< "\n";
          
        } else{ cout << "no" <<"\n";
          
        }
        getline(cin, str);
    }

    return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

  

  
  
  
  
  
  
  
  
  
