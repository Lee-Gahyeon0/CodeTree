#include <iostream>
using namespace std;

int main() {
    int n;
    string arr[10],total;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        total+=arr[i];
        
    }

    for(int i=0;arr[i]!=' ';i++){
        for(int j=0;j<5;j++){
            cout << total[i];
        }
        cout << endl;
    }
    
    



    return 0;
}