#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=1;

    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << cnt;
            if(cnt==9){
                cnt=1;
            }
            else{
                cnt++;
            }
            
        }
        cout << endl;
    }

    return 0;
}