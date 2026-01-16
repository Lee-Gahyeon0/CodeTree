#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0;i<n*2;i+=2){
        for(int j=11;j<=n*2+10;j+=2){
            cout << j+i << " ";
        }
        cout << endl;
    }
    return 0;
}