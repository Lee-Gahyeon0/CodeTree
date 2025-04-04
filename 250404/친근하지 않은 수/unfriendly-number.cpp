#include <iostream>
using namespace std;

int main() 
{
    int n,a=0;
    cin >> n;

    for (int i=n;i>0;i--){
        if(i%2==0 || i%3==0 || i%5==0){
            continue;
        }
        else a++;
    }

    cout << a;
    
    return 0;
}