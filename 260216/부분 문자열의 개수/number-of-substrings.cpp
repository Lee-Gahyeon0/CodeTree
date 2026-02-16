#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
    string a;
    int cnt=0;
    cin >> s >> a;

	for(int i=0;i<s.length();i++){
		if(s.substr(i,a.length())==a){
			cnt++;
		}
	}

    
    cout << cnt;


	return 0;

}
