#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int l = s.length();
    s = s.substr(1,l-1)+s.substr(0,1);
    cout << s;
    
    return 0;
}
