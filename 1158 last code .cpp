#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    queue<int> q;
    int m, size;

    cin >> size;
    cin >> m;

    for(int a = 1; a <= size; a++){
        q.push(a);
    }
     cout<< "<";
    while(q.size() > 1){
        for(int b = 1; b <= m - 1; b++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }

    cout << q.front();
    
    cout<< ">";

    return 0;
}
