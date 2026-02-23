#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    
    char a, b;
    cin >> a >> b;

    int sum = a + b;


    int diff;
    if (a > b) {
        diff = a - b;
    } else {
        diff = b - a;
    }

    cout << sum << " " << diff << endl;

    return 0;
}