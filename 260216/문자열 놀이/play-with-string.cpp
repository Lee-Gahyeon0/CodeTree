#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q;
    int num;
    cin >> s >> q;

    for(int i=0;i<q;i++){
        cin >> num;

        if(num==1){
            int a,b;
            char h;
            cin >> a >> b;

            h=s[a-1];
            s[a-1]=s[b-1];
            s[b-1]=h;

            cout << s << endl;
        }

        else{
            char x,y;
            cin >> x >> y;

            for(int j=0;j<s.length();j++){
                if(s[j]==x){
                    s[j]=y;
                }
            }

            cout << s << endl;
        }
    }
    return 0;
}