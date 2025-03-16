#include <iostream>
using namespace std;

int F(int n) {
    if (n < 10)
        return n*n;

    return F(n / 10) + (n % 10)* (n % 10);
}

int main() {
    int n;
    cin >> n;

    cout << F(n);
    return 0;
}

