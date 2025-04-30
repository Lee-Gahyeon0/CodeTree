#include <iostream>
using namespace std;

int main() 
{
    int n,m=0;
    cin >> n;

    for (int i=1;i<=100;i++){
        m += i;
        if(m>=n){
            cout << i;
            break;
        }
    }

    
    
    return 0;
}