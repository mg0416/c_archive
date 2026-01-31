#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() 
{
   int n; 
   int cnt;
   cin>>n;
   queue<int> q;
   for(int a=1; a<=n; a++){
        q.push(a);
   }
     while(!q.empty()){
       cnt=q.front();
       cout<< q.front();
       q.pop();
       q.push(q.front());
       
     }
     cout<<q.front();
     
}
