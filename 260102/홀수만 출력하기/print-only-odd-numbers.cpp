#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%3==0 && arr[i]%2!=0){
            cout << arr[i] << endl;
        }
    }
  
    return 0;
}