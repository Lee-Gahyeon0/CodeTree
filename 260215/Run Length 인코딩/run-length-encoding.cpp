#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a;


    char target=a[0];
    int cnt=1;
    for(int i=1;i<a.length();i++){
        if(target==a[i]){
            cnt++;
        }
        
        else{
            b+=target;
            b+=to_string(cnt);

            target=a[i];
            cnt=1;
        }

    }
    b += target;
    b += to_string(cnt);

    cout << b.length() << endl;
    cout << b;

    
    return 0;
}