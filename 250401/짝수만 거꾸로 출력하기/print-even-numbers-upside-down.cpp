#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = n - 1; j >= 0; j--) {
        if (a[j] % 2 == 0) {
            cout << a[j] << " ";
        }
    }

    return 0;
}