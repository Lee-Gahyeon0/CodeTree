#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ee=false,ab=false;
    int l=s.length();

    for(int i=0;i<l;i++){
        if(s.substr(i,2)=="ee"){
            ee=true;
        }
    }

    for(int i=0;i<l;i++){
        if(s.substr(i,2)=="ab"){
            ab=true;
        }
    }


    if(ee==true) cout << "Yes ";
    else cout << "No ";

    if(ab==true) cout << "Yes ";
    else cout << "No ";

    return 0;
}