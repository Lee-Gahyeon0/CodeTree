#include <iostream>
using namespace std;

int main() {
    char arr[10];

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    for(int J=9;J>=0;J++){
        cout << arr[J];
    }
    return 0;
}