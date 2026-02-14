#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a;
    b+=a[0];


    char target=a[0];
    int cnt=1;
    for(int i=1;i<a.length();i++){
        if(target==a[i]){
            cnt++;
        }
        
        else{
            b+=to_string(cnt);
            cnt=1;
            target=a[i];
            b+=target;
        }

        if(i==a.length()-1){
            b+=to_string(cnt);
        }
    }

    cout << b.length() << endl;
    cout << b;

    
    return 0;
}