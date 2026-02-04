#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    double sum=0;
    double total;
    
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j]; 
        }
    }

    cout << fixed;
    cout.precision(1);
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        total+=sum;
        cout << sum/4.0 << " ";
        sum=0;
    }
    cout << endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            sum+=arr[j][i];
        }
        cout << sum/2.0 << " ";
        sum=0;
    }
    cout << endl;
    cout << total/8.0;


    return 0;
}