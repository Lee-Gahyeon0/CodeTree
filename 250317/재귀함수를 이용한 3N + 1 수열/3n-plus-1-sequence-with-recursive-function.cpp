#include <iostream>

using namespace std;

int F(int n, int a)
{
    if (n == 1)
        return a;
    else {
        if (n % 2 == 0)
            return F(n / 2, a + 1);

        else
            return F(3*n + 1, a + 1);
    }

}

int main() 
{
    int n;
    int count = 0;
    cin >> n;

    cout << F(n, count);

    return 0;
}