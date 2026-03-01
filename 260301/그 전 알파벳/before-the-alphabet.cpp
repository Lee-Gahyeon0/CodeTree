#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;

    int test = int(a);

    if(test==97){
        test+=25;
    }
    else{
        test--;
    }

    cout << char(test);
    return 0;
}