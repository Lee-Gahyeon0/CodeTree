#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr;
    int n;
    cin >> arr >> n;

    int cnt=0;
    for(int i=arr.length()-1;cnt!=n;i--){
        cout << arr[i];
        cnt++;
    }
    return 0;
}