#include <iostream>
using namespace std;

int add(int a)
{
    int total = 0;
    if (a == 0)
        return 0;
    
    return a + add(a - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << add(n);

    return 0;
}
