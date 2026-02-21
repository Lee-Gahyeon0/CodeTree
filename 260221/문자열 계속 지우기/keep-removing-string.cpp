#include <iostream>
#include <string>

using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    
	int start_idx = -1;

	while (a.find(b) != string::npos) {
		start_idx = a.find(b);
		a.erase(start_idx,b.length());
	}

    
    cout << a;


	return 0;

}
