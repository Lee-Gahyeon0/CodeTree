#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    cin >> n;

    for(int i=1;i<=100;i++){
        n=n/i;
        cnt++;
        if(n<=1){
            break;
        }
    }
    cout << cnt;
    return 0;
}