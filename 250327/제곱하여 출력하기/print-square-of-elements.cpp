#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }



    for (int j = 0; j < n; j++) {
        cout << a[j] * a[j] << " ";
    }

    return 0;
}