#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    int total=0;
    int cnt[10]={0,0,0,0,0,0,0,0,0,0};

    cin >> a >> b;
    for(int i=0;i<100;i++){
        if(a<=1){
            break;
        }

        if(a%b==1){
            cnt[0]++;
        }
        else if(a%b==2){
            cnt[1]++;
        }
        else if(a%b==3){
            cnt[2]++;
        }
        else if(a%b==4){
            cnt[3]++;
        }
        else if(a%b==5){
            cnt[4]++;
        }
        else if(a%b==6){
            cnt[5]++;
        }
        else if(a%b==7){
            cnt[6]++;
        }
        else if(a%b==8){
            cnt[7]++;
        }
        else if(a%b==9){
            cnt[8]++;
        }
        else{
            cnt[9]++;
        }

        a=a/b;
    }
        

    for(int j=9;j>=0;j--){
        total = total + (pow(cnt[j],2));
    }
    cout << total;
    return 0;
}