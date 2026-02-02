#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[1000];
    cin >> n;

    //입력
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //판별
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        bool fin=false;

        if(i>0 && arr[i]==arr[i-1]){
            fin=true;
        }

        if(i<n-1 && arr[i]==arr[i+1]){
            fin=true;
        }
        

        if(!fin){
            cout << arr[i];
            return 0;
        }
           
    }
    
    cout << -1;

    return 0;
}