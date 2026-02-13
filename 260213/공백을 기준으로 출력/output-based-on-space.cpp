#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    string total=str1+str2;

    for(int i=0;i<total.length();i++){
        if(total[i]!=' '){
            cout << total[i];
        }
    }
    return 0;
}