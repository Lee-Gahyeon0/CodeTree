#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int M=-1;
    int arr[100];
    cin >> n;

    //입력
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //판별
    for(int i=0;i<n;i++){
        if(arr[i]>=M){
            if(arr[i]!=M){
                M=arr[i];
            }
            else{
                M=-1;
            }
        }
    }

    cout << M;

    return 0;
}