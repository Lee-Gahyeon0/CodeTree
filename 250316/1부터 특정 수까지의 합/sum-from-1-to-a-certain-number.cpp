#include <iostream>
using namespace std;

int add_share(int a) {
    int totoal=0;
    for (int i = 1; i <= a; i++)
        totoal += i;
    return totoal / 10;
}
int main()
{
    int n,b;
    cin >> n;

    cout << add_share(n);

    return 0;
}