#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt='A';
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< char(cnt);
            if(cnt=='Z'){
                cnt='A';
            }
            else{
                cnt++;
            }
        }
        cout << endl;   
    }
    return 0;
}