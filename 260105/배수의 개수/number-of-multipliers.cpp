#include <iostream>
using namespace std;

int main() {
    int cnt3 = 0;
    int cnt5 = 0;
    int arr[10];

    for(int i=0;i<10;i++){
        cin >>arr[i];
        if(arr[i]%3==0 ){
            cnt3++;
        }
        if(arr[i]%5==0){
            cnt5++;
        }
    }

    cout << cnt3 << " " << cnt5;
    return 0;
}