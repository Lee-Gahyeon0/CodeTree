#include <iostream>
#include <string>
using namespace std;

int main() {
    string srt[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    int cnt=0;
    cin >> a;

    for(int i=0;i<5;i++){
        if(srt[i][2]==a ||srt[i][3]==a){
            cout << srt[i] <<endl;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}