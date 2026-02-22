#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int q,a;
    cin >> s >> q;

    int l=s.length();
    for(int i=0; i<q;i++){ 
        cin >> a;
        if(a==1){
            s = s.substr(1,l-1)+s.substr(0,1);
            cout << s << endl;
        }
        else if(a==2){
            s = s.substr(l-1,1)+s.substr(0,l-1);
            cout << s << endl;
        }
        else{
            reverse(s.begin(), s.end());
            cout << s << endl;
        }
    }
    return 0;
}