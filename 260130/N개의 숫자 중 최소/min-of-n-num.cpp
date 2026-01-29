#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10];
    int m=1000;
    int cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<m){
            m=arr[i];
        }

    }
    for(int j=0;j<n;j++){
        if(arr[j]==m){
            cnt++;
        }

    }

    cout << m << " " << cnt;
    return 0;
}