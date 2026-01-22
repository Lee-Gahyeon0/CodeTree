#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    double sum1=0;


    for(int i=0;i<10;i++){
        cin >> arr[i];
        if((i+1)%2==0){
            sum+=arr[i];
        }
        if((i+1)%3==0){
            sum1+=arr[i];
        }
    }
    
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << sum1/3;


    return 0;
}