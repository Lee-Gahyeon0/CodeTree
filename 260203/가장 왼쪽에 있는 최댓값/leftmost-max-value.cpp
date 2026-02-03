#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000];
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int end=n-1;
    while(true){    
        int M=-1;
        int M_idx=-1;

        for(int i=0;i<=end;i++){
            if(M<arr[i]){
                M=arr[i];
                M_idx=i;
            }
        }

        cout << M_idx+1 << " ";

        if(M_idx==0){
            break;
        }

        end=M_idx-1;
    }

    return 0;
}