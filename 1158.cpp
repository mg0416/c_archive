#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() 
{
    queue<int> q;
    int k;
    int n;
    int cnt=0;
    cin>> n >> k;
    for(int a=1; a<=n; a++){
      q.push(a);
     
    }
    cout<< "<";
    while(k<=q.size()){
    for(int b=1; b<=k-1; b++){
      cnt=q.front();
      q.pop();
      q.push(cnt);
          }
      cout<<q.front()<<", ";
      q.pop();
    }
    
    cout<<">";
     
}
