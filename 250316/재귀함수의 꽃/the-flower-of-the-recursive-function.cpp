#include <iostream>
using namespace std;

void flower(int a) {
    if (a == 0)
        return;

    cout << a <<" ";
    flower(a - 1);
    cout << a << " ";
}

int main()
{
    int n;
    cin >> n;

    flower(n);

    return 0;
}
