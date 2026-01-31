#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int M=2147483647;
    int arr[100];
    cin >> n;

    //입력
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //판별
    sort(arr,arr+n);
    for(int i=n-1;i>n-3;i--){
        cout << arr[i] << " ";
    }

    return 0;
}