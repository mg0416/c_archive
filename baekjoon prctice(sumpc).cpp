#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> sumpc;
    char x;

    // 문자 입력
    while (cin >> x) {
        sumpc.push_back(x);
    }

    for (int k = 0; k < sumpc.size(); k++) {
        int ascii = (int)sumpc[k]; // 아스키 코드로 변환
        int sum = 0;

        int temp = ascii;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        // 자리 합만큼 문자 출력
        for (int p = 0; p < sum; p++) {
            cout << sumpc[k];
        }
        cout << "\n";
    }

    return 0;
}
