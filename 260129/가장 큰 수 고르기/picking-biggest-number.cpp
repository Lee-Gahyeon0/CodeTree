#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int M=0;

    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]>M){
            M=arr[i];
        }
    }

    cout << M;
    return 0;
}