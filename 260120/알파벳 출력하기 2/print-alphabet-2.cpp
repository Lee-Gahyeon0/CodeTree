#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt='A';
    cin >> n;

    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            if(j<=i){
                cout<< char(cnt) <<" ";
                
                if(cnt=='Z'){
                    cnt='A';
                }
                else{
                    cnt++;
                }
            }
            else{
                cout <<"  ";
            }
        }
        cout << endl;   
    }
    return 0;
}