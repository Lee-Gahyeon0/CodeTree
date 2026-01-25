#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    int arr[100];
    int new_arr[100];
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            new_arr[cnt]=arr[i];
            cout << new_arr[cnt] << " "; 
            cnt++;
        }
    }
    return 0;
}