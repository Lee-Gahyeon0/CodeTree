#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    char target;
    int cnt=0;

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    cin >> target;

    for(int i=0;i<10;i++){
        int l=arr[i].length();
        if(arr[i][l-1]==target){
            cout << arr[i] << endl;
            cnt++;
        }
    }

    if(cnt==0){
        cout << "None";
    }

    return 0;
}