#include <iostream>
using namespace std;

int Factorial(int k) {
    if (k <= 1)
        return 1;

    return k * Factorial(k-1);
}

int main()
{
    int n;
    cin >> n;

    cout << Factorial(n);

    return 0;
}