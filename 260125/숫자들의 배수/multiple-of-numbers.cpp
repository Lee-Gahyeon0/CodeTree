#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    int arr[100];
    cin >> n;
    if(n%5==0){
        cnt++;
    }

    arr[0]=n;
    cout << arr[0] << " ";
    for(int i=1;i<100;i++){
        if(cnt==2){
           break;
        }
    
        arr[i]=n*(i+1);
        cout << arr[i] << " ";
        
        if(arr[i]%5==0){
            cnt++;
        }
    }
    
    return 0;
}