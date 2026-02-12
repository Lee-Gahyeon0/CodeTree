#include <iostream>
using namespace std;

int main() {
    int n,m;
    int arr[100][100];
    int cnt=1;

    cin >> n >> m;
    
    for (int j = 0; j < m; j++) {
        int idx = j;
        for (int i = 0; i <= (j < n -1 ? j : n -1); i++) {
            arr[i][idx] = cnt;
            idx -= 1;
            cnt += 1;
        }
    }
    for (int i = 1; i < n; i++) {
        int idx = i;
        for (int j = 0; (j < n-i) && (j < m); j++) {
            arr[idx][m-1-j] = cnt;
            cnt += 1;
            idx += 1;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}