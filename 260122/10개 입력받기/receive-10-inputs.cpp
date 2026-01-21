#include <iostream>
using namespace std;

int main() {
	int a[10];
    double sum=0;
    int cnt=0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
        if(a[i]==0){
            break;
        }
        sum+=a[i];
        cnt++;
	}
    double avg = sum/cnt;
    cout << sum << " " ;
    cout << fixed;
    cout.precision(1);
	cout << avg;

	return 0;

}
