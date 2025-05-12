#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

bool solution(string str) {
    stack<string> s;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            s.push((string)"(");
        }
        else {
            if (s.empty() == true) {
                return false;
            }
            s.pop();
        }
    }

    if (s.empty() == false) {
        return false;
    }
    
    return true;
}

int main() {
    cin >> str;

    if (solution(str) == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}
