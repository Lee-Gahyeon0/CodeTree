#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int cnt=0;
    double sum=0;
    char target;
    string arr[20];

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> target;
    
    

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i][0]==target){
            cnt++;
            sum+=arr[i].length();
        }
    }

    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << sum/cnt;
    
    return 0;
}