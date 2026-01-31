#include <iostream>
#include <string>
using namespace std;

int main() 
{

    string first_arr;
    string second_arr;
    int sum = 0;

   cin>>first_arr;
   cin>> second_arr;

    for(int d = 0; d < first_arr.size(); d++){
        for(int e = 0; e < second_arr.size(); e++){
            sum = sum+ (first_arr[d]-'0')*  ( second_arr[e]-'0');
        }
    }

    cout << sum;
    return 0;
}
