#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string a;
    string total="";

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a;
        total+=a;
    }

    for(int i=0;i<total.length();i++){
        cout << total[i];
        if((i+1)%5==0){
            cout << endl;
        }
    }
    
    



    return 0;
}