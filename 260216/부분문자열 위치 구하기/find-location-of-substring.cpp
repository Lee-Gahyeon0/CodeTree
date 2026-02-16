#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
    char a;
    cin >> s >> a;
	int start_idx = -1;

	if (s.find(a) != string::npos) {
		start_idx = s.find(a);
	}

    
    cout << start_idx;


	return 0;

}
