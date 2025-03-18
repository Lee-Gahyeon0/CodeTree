#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    cout << n << endl;
    while (n/m !=0)
    {
        n = n/m;
        cout << n << endl; 
    }
    
    return 0;
}
