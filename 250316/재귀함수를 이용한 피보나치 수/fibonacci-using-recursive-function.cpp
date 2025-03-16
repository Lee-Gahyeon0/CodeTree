#include <iostream>
using namespace std;

int F(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;


    return F(a - 1) + F(a - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << F(n);

    return 0;
}
