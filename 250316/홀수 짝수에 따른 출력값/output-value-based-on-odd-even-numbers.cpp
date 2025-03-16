#include <iostream>
using namespace std;

int add(int k) {
    if (k == 1 || k == 2)
        return k;

    return k + add(k - 2);

}

int main()
{
    int n;
    cin >> n;

    cout << add(n);

    return 0;
}