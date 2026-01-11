#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    cin >> n;

    while(true){
        if(n==1){
            cout << cnt;
            break;
        }

        if(n%2==0){
            n=n/2;
            cnt++;
        }
        else{
            n=n*3+1;
            cnt++;
        }
    }

    
    return 0;
}