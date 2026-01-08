#include <iostream>
using namespace std;

int main() {
    int n,a;
    int sum=0;
    double avg=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> a;
        sum+=a;
    }
    avg = double(sum)/n;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    
    return 0;
}