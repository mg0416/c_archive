#include <iostream>
#include <deque>
using namespace std;

int main() 
{
    int n;
    int k;
    int m;
    cin >> n >> k >> m;
    int cnt =0;
    int flag =0;
    deque <int> d(n);
    for(int a=1; a<=n; a++){
        d[a-1] =a;
    }
    
    while(!d.empty()){
      if(flag==0){
        for(int a=0; a<k-1; a++){
            int g;
            g = d.front();
            d.pop_front();
            d.push_back(g);
        }
        int l = d.front();
        cout << l << endl; 
        d.pop_front();
        cnt ++;
      }
      if(flag!=0){
        for(int a=0; a<k-1; a++){
            int g;
            g = d.back();
            d.pop_back();
            d.push_front(g);
        }
        int l = d.back();
        cout << l << endl; 
        d.pop_back();
        cnt ++;
      }
      if(cnt == m){
        flag  = !flag;
        cnt =0;
      }
    }
    
    return 0;
}
