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

    cout << total;



    return 0;
}