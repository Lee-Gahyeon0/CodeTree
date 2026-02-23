#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2;

    cin >> s1 >> s2;


    int a = (int)s1[0];
    int b = (int)s2[0];

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