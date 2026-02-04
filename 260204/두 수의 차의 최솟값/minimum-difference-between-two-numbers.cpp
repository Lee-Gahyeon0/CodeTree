#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10];
    int dif=100;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i>j && (arr[i]-arr[j])<=dif){
                dif=arr[i]-arr[j];
            }
        }
    }

    cout << dif;

    return 0;
}