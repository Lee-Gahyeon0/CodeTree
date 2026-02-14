#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int cnt=0,sum=0;
    string arr[10];
    
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i].length();
        if(arr[i][0]=='a'){
            cnt++;
        }
    }

    cout << sum << " " << cnt;
    
    return 0;
}