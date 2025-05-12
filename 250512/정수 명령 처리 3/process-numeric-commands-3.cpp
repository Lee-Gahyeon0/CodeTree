#include <iostream>
#include <stack>
#include <deque>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    deque<int> s;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front") {
            cin >> A[i];
            s.push_front(A[i]);
        }

        else if (command[i] == "push_back") {
            cin >> A[i];
            s.push_back(A[i]);
        }

        else if (command[i] == "pop_front") {
            cout << s.front() << endl;
            s.pop_front();
        }

        else if (command[i] == "pop_back") {
            cout << s.back() << endl;
            s.pop_back();
        }
        else if (command[i] == "size") {
            cout << s.size() << endl;
        }

        else if (command[i] == "empty") {
            cout << s.empty() << endl;
        }

        else if (command[i] == "front") {
            cout << s.front() << endl;
        }

        else {
            cout << s.back() << endl;
        }
    }



    return 0;
}
