#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;

    while(true){
        cin >> n;

        if(n%2!=0){
            continue;
        }
        else{
            cout << n/2 << endl;
            cnt++;
        }


        if(cnt==3){
            break;
        }
    }
    return 0;
}