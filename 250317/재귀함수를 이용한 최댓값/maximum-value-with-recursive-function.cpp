#include <iostream>

using namespace std;


int arr[100];

int MAX(int n)
{
    if(n==0){
        return arr[0];
    }
    int a =  MAX(n-1);
    return (a>arr[n]? a:arr[n]);
}
int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << MAX(n-1);

    return 0;
}