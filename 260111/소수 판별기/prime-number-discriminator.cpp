#include <iostream>
using namespace std;

int main() {
    int n;
    bool set = false;

    cin >> n;

    int i=n;
    while(i>1){
        if(n%i==0){
            if(i==n){
                set = true;
            }
            else{
                set = false;
                break;
            }
        }
            i--;
    }

    if(set==true){
        cout << "P";
    }
    else{
        cout << "C";
    }
    
    return 0;
}