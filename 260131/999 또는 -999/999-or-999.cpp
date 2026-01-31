#include <iostream>
using namespace std;

int main() {
    int M=-1000,m=1000;
    int arr[100];
    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==999||arr[i]==-999){
            break;
        }

        if(arr[i]>M){
            M=arr[i];
        }
        if(arr[i]<m){
            m=arr[i];
        }
    }
    cout << M << " " << m;
    return 0;
}