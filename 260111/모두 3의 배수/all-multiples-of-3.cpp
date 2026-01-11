#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i=0;i<5;i++){
        cin >> arr[i];
        if(arr[i]%3==0){
            if(i==4){
                cout << "1";
            }
        }
        else{
            cout << "0";
            break;
        }
    }
    return 0;
}