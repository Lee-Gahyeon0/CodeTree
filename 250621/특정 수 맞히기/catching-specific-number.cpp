#include <iostream>
using namespace std;

int main() {
    int a;

    while(true){
        cin >> a;
        if(a==25){
            cout << "Good" << endl;
            break;
        }
        else if(a<25){
            cout << "Higher" << endl;
        }
        else{
            cout << "Lower" << endl;
        }
    }
    return 0;
}