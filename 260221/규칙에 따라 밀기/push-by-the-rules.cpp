#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,a;
    cin >> s >> a;
    int l = s.length();

    for(int i=0;i<a.length();i++){
        if(a[i]=='L'){
            s = s.substr(1,l-1)+s.substr(0,1);
        }
        else{
            s = s.substr(l-1,1)+s.substr(0,l-1);
        }
    }
    cout << s << endl;
    
    
    return 0;
}
