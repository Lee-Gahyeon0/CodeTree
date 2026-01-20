#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    cin >> n;
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt++;
            }

            
        }
        if(cnt==2){
             cout << i << " ";
        }
        cnt=0;
    }
    return 0;
}