#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int b, c, d;
        cin >> b >> c >> d;

        int cnt = 0;

        if (b == c && c == d) {
            cnt = 10000 + b * 1000;
        }
        else if (b == c || b == d) {
            cnt = 1000 + b * 100;
        } 
        else if (c == d) {
            cnt = 1000 + c * 100;
        } 
        else  {
            cnt = max({b, c, d}) * 100;
        }

        if (cnt > answer) answer = cnt;
    }

    cout << answer;
    return 0;
}
