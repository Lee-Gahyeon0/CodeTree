#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    cin >> n;

    int i=1;
    while(n/i>=1){
        cnt++;
        i++;
    }

    cout << cnt;
    return 0;
}