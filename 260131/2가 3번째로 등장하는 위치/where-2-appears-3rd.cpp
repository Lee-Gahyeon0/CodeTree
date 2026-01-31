#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    int arr[100];

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int j=0;j<n;j++){
        if(arr[j]==2){
            cnt++;
        }

        if(cnt==3){
            cout << j+1;
            break;
        }
    }

    return 0;
}