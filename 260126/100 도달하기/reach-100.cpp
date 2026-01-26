#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    int arr[100];
    cin >> n;
    arr[0] = 1;
    arr[1] = n;

    for(int i=2;i<100;i++){
        arr[i]=arr[i-2]+arr[i-1];
        cnt++;
        if(arr[i]>=100){
            break;
        }
    }

    for(int j=0;j<cnt+2;j++){
        cout << arr[j] << " ";
    }
    return 0;
}