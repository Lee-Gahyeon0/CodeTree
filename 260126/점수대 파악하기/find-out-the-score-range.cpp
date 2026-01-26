#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int cnt[10]={0,0,0,0,0,0,0,0,0,0};

    for(int i=0;i<100;i++){
        cin >> n;
        if(n==0){
            break;
        }
        arr[i]=n/10;

        if(arr[i]==1){
            cnt[0]++;
        }
        else if(arr[i]==2){
            cnt[1]++;
        }
        else if(arr[i]==3){
            cnt[2]++;
        }
        else if(arr[i]==4){
            cnt[3]++;
        }
        else if(arr[i]==5){
            cnt[4]++;
        }
        else if(arr[i]==6){
            cnt[5]++;
        }
        else if(arr[i]==7){
            cnt[6]++;
        }
        else if(arr[i]==8){
            cnt[7]++;
        }
        else if(arr[i]==9){
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