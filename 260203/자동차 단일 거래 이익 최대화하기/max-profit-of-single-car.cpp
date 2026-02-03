#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    signed int M_profit=0,m=INT_MAX;
    int arr[1000];
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<=m){
            m=arr[i];
        }
        if(arr[i]-m>M_profit){
            M_profit=arr[i]-m;
        }
    }

    cout <<M_profit;


    return 0;
}