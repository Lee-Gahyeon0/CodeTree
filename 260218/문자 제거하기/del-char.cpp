#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int a;
    cin >> s;

    
    int l=s.length();
    for(int i=0;i<l-1;i++){
        cin >> a;
        if(a>=s.length()){
            s.erase(s.length()-1,1);
        }
        else{
            s.erase(a,1);
        }
        
        cout << s << endl;
    }

    return 0;
}