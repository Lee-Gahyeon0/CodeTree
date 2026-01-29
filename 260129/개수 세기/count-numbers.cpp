#include <iostream>
using namespace std;

int main() {
    int n,m;
    int arr[100];
    int cnt=0;

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int j=0;j<n;j++){
        if(arr[j]==m){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}