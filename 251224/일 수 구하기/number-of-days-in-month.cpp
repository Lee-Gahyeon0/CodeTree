#include <iostream>
using namespace std;

int main() {
    int a;


    cin >> a;
    if(a==2 || a==4 || a==6 || a==9 || a==11){ 
        if(a==2){
            cout << "28";
        }
        else{
            cout << "30";
        }     
    }

    else{
        cout << "31";
    }
    
    return 0;
}