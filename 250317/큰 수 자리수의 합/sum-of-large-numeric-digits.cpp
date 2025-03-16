#include <iostream>

using namespace std;


int add(int a)
{
    if (a / 10 == 0)
        return a;

    return add(a / 10) + (a % 10);
}

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    int total = a * b * c;
    cout << add(total);

    return 0;
}