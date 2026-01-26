#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt[10]={0,0,0,0,0,0,0,0,0,0};

    for(int i=0;i<100;i++){
        cin >> n;
        if(n==0){
            break;
        }
        if(n<10){
            continue;
        }

        if(n/10==1){
            cnt[0]++;
        }
        else if(n/10==2){
            cnt[1]++;
        }
        else if(n/10==3){
            cnt[2]++;
        }
        else if(n/10==4){
            cnt[3]++;
        }
        else if(n/10==5){
            cnt[4]++;
        }
        else if(n/10==6){
            cnt[5]++;
        }
        else if(n/10==7){
            cnt[6]++;
        }
        else if(n/10==8){
            cnt[7]++;
        }
        else if(n/10==9){
            cnt[8]++;
        }
        else{
            cnt[9]++;
        }
    }
        

    for(int j=9;j>=0;j--){
        cout << (j+1)*10 << " - " << cnt[j] <<  endl;
    }
    return 0;
}