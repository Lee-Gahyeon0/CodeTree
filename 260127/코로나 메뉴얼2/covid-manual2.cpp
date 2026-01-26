#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    int num[4]={0,0,0,0};
    int cnt=0;
    for(int i=0;i<3;i++){
        cin >> a >> b;
        if(a=='Y'){
            if(b>=37){
                num[0]++;
                cnt++;
            }
            else{
                num[2]++;
            }
        }   
        else{
            if(b>=37){
                num[1]++;
            }
            else{
                num[3]++;
            }
        }
    }

    for(int j=0;j<4;j++){
        cout << num[j] << " ";
    }
    if(cnt>=2){
        cout << "E";
    }
    return 0;
}