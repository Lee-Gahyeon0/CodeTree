#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i =1;
    while(i*3<=n){
        cout << i*3 << " ";
        i++;
    }
    return 0;
}