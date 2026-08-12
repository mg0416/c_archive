#include <iostream>
#include <vector>
#include <string>
#include <cmath>


using namespace std;

int main() 
{
    int n;
    int k1;
    int k2;
    int answer =0;

    cin >> n >> k1 >> k2;

    vector <int> v(n);
    for(int a=0 ; a<n ; a++){
        cin >> v[a];
    }

    vector <int> result(n);


    for(int a=0 ; a<n ; a++){
        for(int b=0 ; b<n ; b++){
           if(a!=b){
            if(v[a] == v[b]){
              if(abs(a-b)<=k1){
                answer ++;
              }
            }
            else if(v[a]!=v[b]){
                if(abs(a-b)<=k2){
                    answer ++;
                }
            }
        }
    }

    result[a] = answer ;
    answer=0;
}
   for(int a : result){
    cout << a << " ";
   }


  
    return 0;
}
