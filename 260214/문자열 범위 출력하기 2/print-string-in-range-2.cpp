#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr;
    int n;
    cin >> arr >> n;

    
    if(arr.length()<=n){
        for(int i=arr.length()-1;i>=0;i--){
        cout << arr[i];
        }
    }

    else{
        int cnt=0;
        for(int i=arr.length()-1;cnt!=n;i--){
        cout << arr[i];
        cnt++;
        }
    }
    
    return 0;
}