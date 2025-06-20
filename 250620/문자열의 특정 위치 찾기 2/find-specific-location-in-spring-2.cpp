#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    int count = 0;
    cin >> a;

    for(int i=0; i<5; i++){
        if(arr[i][2]==a || arr[i][3]==a){
            count +=1;
            cout << arr[i] << endl;
        }
    }
    cout << count << endl;


    return 0;
}