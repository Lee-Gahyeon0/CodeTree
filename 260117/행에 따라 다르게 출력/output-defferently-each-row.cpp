#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=1;
    cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			for (int j = 0; j < n; j++) {
				cout << cnt << " ";
                cnt++;
			}
            cnt ++;
		}

		else {
            for (int j = 0; j < n; j++) {
				cout << cnt << " ";
                cnt+=2;
			}
		}
        cnt--;
        cout << endl;
	}

	return 0;

}


