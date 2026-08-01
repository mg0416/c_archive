#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int kind=0;
    int n; // 접시의 수
    int d; // 초밥의 가짓수
    int k; //연속하는 접시의 수
    int c; //쿠폰 번호
    cin >> n >> d >> k >> c;
    vector <int> cnt(d+1,0);
    vector <int> v;
    vector <int > sushi(n);
    vector <int> size;
    for(int a=0; a< n; a++){
        cin >> sushi[a];
    }
    int answer=0;
 
   for(int i=0 ; i < n ; i++){
      int kind=0;
      vector <int> cnt(d+1,0);
       for(int j=0;  j<k ; j++){
        int idx= (i + j) %n ;
        int x= sushi[idx];
        if(cnt[x]==0){
           kind ++;
        }
        cnt[x]++;
     }
           if(cnt[c]==0) {
          answer = kind + 1;
           }
           else{ 
            answer =kind;
        }
    
     size.push_back(answer);
     kind =0;
     answer =0;
   }

   cout << *max_element(size.begin() , size.end());
}
