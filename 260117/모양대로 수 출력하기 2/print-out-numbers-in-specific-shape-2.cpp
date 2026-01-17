#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=2;

    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << cnt << " ";
            if(cnt==8){
                cnt=2;
            }
            else{
                cnt+=2;
            }
            
        }
        cout << endl;
    }

    return 0;
}