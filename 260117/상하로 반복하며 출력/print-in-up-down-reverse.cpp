#include <iostream>
using namespace std;

int main() {
    int n;
	int sum = n+1;

    cin >> n;
	
	for (int i = 0; i < n; i++) {
		int now=i;
		for (int j = 0; j < n; j++) {
			cout << now;
			now=sum-now;
		}
		cout << endl;
	}

	return 0;

}


