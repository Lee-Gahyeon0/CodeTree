#include <iostream>
using namespace std;

int min(int n, int m,int l) {
    int min;
    if (n<m) {
        if (n < l) {
            min = n;
        }
        else {
            min = l;
        }
    }
    else {
        if (m < l) {
            min = m;
        }
        else {
            min = l;
        }
    }
    return min;
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    cout << min(a,b,c);
    return 0;
}