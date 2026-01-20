#include <iostream>
using namespace std;

int main() {
    int a,b;
    int cnt=0;
    int res=0;

    cin >> a >> b;
    for(int j=a;j<=b;j++){
        for(int i=1;i<=j;i++){
            if(j%i==0){
                cnt++;
            }
        }   
        if(cnt==3){
            res++;
        }
        cnt=0; 
    }
        cout << res << endl;

    return 0;
}