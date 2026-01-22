#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    double sum=0,avg=0;
    cin >> n;

    int arr[4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i];
            sum+=arr[i];
        }

        avg=sum/4;
        if(avg>=60){
            cout << "pass" << endl;
            cnt++;
        }
        else{
            cout << "fail" << endl;
        }

        sum=0;
        avg=0;
    }

    cout << cnt;
    return 0;
}