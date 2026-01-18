#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=1;
    cin >> n;

    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            if(j<=i){
                cout << cnt << " ";
                if(cnt==9){
                    cnt=1;
                }
                else{
                    cnt++;
                }
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}