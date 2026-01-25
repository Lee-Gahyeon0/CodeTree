#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt=0;

    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        cnt++;
    }

    for(int j=0;j<cnt;j++){
        if(arr[j]%2!=0){
            cout << arr[j]+3 << " ";
        }

        else{
            cout << arr[j]/2 << " ";
        }
    }
    return 0;
}