#include <iostream>
using namespace std;

void star(int a)
{
    if (a == 0)
        return;

    star(a - 1);
    for (int i = 0 ; i < a; i++) {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    star(n);

    return 0;
}
