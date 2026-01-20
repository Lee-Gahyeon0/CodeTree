#include <iostream>
using namespace std;

int main() {
    int a,b;
    int sum=0;
    int cnt=0;

    cin >> a >> b;
    for(int j=a;j<=b;j++){
        for(int i=1;i<j;i++){
            if(j%i==0){
                sum+=i;
            }
        }   
        if(sum==j){
            cnt++;
        }
        sum=0; 
    }
        cout << cnt << endl;

    return 0;
}