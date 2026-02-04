#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[10];
    int M=500,m=500;

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    sort (arr, arr+10);
    for(int i=0;i<10;i++){
        if(arr[i]>500){
            cout << arr[i-1] << " " << arr[i];
            break;
        }
    }    
    return 0;
}