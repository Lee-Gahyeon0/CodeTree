#include <iostream>
using namespace std;

int main() {
    int n;
    int a,b;
    int arr=1;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a >> b;

        for(int j=a;j<=b;j++){
            arr*=j;
        }
        cout << arr << endl;
        arr=1;
    }

    return 0;
}