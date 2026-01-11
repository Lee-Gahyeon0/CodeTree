#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    cin >> n;

    while(true){
        if(n/2==0){
            break;
        }

        else{
            n=n/2;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}