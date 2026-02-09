#include <iostream>
using namespace std;

int main() {
    int n,m,r,c;
    int num=1;
    int arr[9][9];
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    for(int i=0;i<m;i++){
       cin >> r >> c;
       arr[r-1][c-1] = num++;
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}