#include <iostream>
using namespace std;

int main() {
    int a,b;
    int c=0;

    cin >> a >> b;
    for (int i = a; i <=b; i++){
        if(i%2==0){
            c +=i;
        }
    }
    cout << c;

    return 0;
}