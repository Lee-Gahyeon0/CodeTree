#include <iostream>
#include <queue>

using namespace std;

int n, k;

int solution(int n, int k) {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (q.size() != 1) {
        for (int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    return q.front();
}

int main() {
    cin >> n >> k;

    cout << solution(n, k) << endl;

    return 0;
}
