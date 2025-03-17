#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b)/ gcd(a, b);
}

int F(int x)
{
    if (x==0)
        return arr[0];

    return lcm(arr[x], F(x-1));
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << F(n-1);
    return 0;
}

