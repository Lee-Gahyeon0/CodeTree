#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l=s.length();
    int cnt1=0,cnt2=0;

    for(int i=0;i<l;i++){
        if(s.substr(i,2)=="ee"){
            cnt1++;
        }
    }

    for(int i=0;i<l;i++){
        if(s.substr(i,2)=="eb"){
            cnt2++;
        }
    }


    cout  << cnt1 << " " << cnt2;
    return 0;
}