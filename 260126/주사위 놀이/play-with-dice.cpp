#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt[6]={0,0,0,0,0,0};

    for(int i=0;i<10;i++){
        cin >> arr[i];

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
        else{
            cnt[5]++;
        }
        
    }

    for(int j=0;j<6;j++){
        cout << j+1 << " - " << cnt[j] <<  endl;
    }
    return 0;
}