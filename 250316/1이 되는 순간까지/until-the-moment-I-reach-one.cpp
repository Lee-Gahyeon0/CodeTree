#include <iostream>
using namespace std;

int F(int n, int count) {
    if (n == 1)
        return count;

    if (n % 2 == 0) {
        return F(n / 2, count + 1);
    }
    else {
        return F(n / 3, count + 1);
    }
}

int main() {
    int n;
    cin >> n;

    cout << F(n, 0);
    return 0;
}

