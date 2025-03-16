#include <iostream>
using namespace std;

void forward(int a) {
    if (a == 0) {
        return;
    }

    forward(a - 1);
        cout << a << " ";

}

void reverse(int b) {
    if (b == 0) {
        return;
    }

    cout << b << " ";
    reverse(b - 1);

}

int main()
{
    int n;
    cin >> n;

    forward(n);
    cout << endl;
    reverse(n);

    return 0;
}
