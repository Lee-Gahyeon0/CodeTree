#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=1;
    cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
            cnt+=n+1;
            if(i==1){
                cnt=1;
            }
			for (int j = 0; j < n; j++) {
				cout << cnt << " ";
                cnt++;
			}
		}
		else {
            cnt+=n-1;
            for (int j = 0; j < n; j++) {
				cout << cnt << " ";
                cnt--;
			}
		}
		cout << endl;
	}

	return 0;

}


