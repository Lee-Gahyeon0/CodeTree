#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0, cnt = 0;

    while(true){
        cin >> a;
        if(a>29 || a<20){
            break;
        }

        else{
            sum+=a;
            cnt ++;
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << double(sum)/cnt;
    return 0;
}