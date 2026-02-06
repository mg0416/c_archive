#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    queue<int> q;
    int m, size;

    cin >> m;
    cin >> size;

    for(int a = 1; a <= size; a++){
        q.push(a);
    }

    while(q.size() > 1){
        for(int b = 1; b <= m - 1; b++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }

    // 마지막 남은 사람 출력
    cout << q.front();

    return 0;
}
