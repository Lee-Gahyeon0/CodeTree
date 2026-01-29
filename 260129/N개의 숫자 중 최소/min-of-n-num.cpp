#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int m=1000;
    int cnt=0;

    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]<m){
            m=arr[i];
        }

    }
    for(int j=0;j<10;j++){
        if(arr[j]==m){
            cnt++;
        }

    }

    cout << m << " " << cnt;
    return 0;
}