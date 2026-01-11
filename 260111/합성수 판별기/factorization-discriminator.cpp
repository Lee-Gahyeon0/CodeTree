#include <iostream>
using namespace std;

int main() {
    int n;
    bool set = false;

    cin >> n;

    int i=n-1;
    while(i>1){
        if(n%i==0){
            set = true;
        }
            i--;
    }

    if(set==true){
        cout << "C";
    }
    else{
        cout << "N";
    }
    
    return 0;
}