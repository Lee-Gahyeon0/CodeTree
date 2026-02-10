#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1,str2,str3;
    cin >> str1 >> str2 >> str3;

    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();

    int M = max({len1, len2, len3});
    int m = min({len1, len2, len3});

    cout << M-m;

    return 0;
}