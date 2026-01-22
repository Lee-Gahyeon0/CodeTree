#include <iostream>
using namespace std;

int main() {
    int n,a;
    int cnt=0;
    cin >> n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin >> a;
        if(a%2==0){
            arr[cnt]=a;
            cnt++;
        }
    }
    for(int j=cnt-1;j>=0;j--){
        cout << arr[j] << " ";
    }
    return 0;
}