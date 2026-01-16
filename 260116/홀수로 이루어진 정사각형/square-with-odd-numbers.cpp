#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=11;j<=n*2+11;j+=2){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}