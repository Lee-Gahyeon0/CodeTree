#include <iostream>
using namespace std;

int main() {
    int n,q,a,b,s,e,num;
    int arr[100];
    cin >> n >> q;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int j=0;j<q;j++){
        cin >> num;
        if(num==1){
            cin >> a;
            cout << arr[a-1] << endl;
        }

        else if(num==2){
            int cnt=0;
            cin >> b;
            for(int k=0;k<n;k++){
                if(arr[k]==b){
                    cout << k+1;
                    cout << endl;
                    cnt++;
                    if(cnt>=1){
                        break;
                    }
                }
            }

            if(cnt==0){
                cout << "0" << endl;
            }
            cnt=0;
        }

        else{
            cin >> s >> e;
            for(int k=s-1;k<e;k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}