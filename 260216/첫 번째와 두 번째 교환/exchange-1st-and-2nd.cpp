#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char s1=s[0];
    char s2=s[1];

    for(int i=0;i<s.length();i++){
        if(s[i]==s2){
            s[i]=s1;
        }
        
        else if(s[i]==s1){
            s[i]=s2;
        }
    }

    cout << s;
    
    return 0;
}