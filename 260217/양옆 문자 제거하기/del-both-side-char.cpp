#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    s.erase(2,1);
    s.erase(s.length()-2,1);
    cout << s;

    return 0;
}