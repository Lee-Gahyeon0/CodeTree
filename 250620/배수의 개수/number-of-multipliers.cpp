#include <iostream>
using namespace std;

int main() {
    int a;
    int total_3 = 0;
    int total_5 = 0;

    
    for (int i = 0; i <10; i++){
        cin >> a;
        if(a%3==0){
            total_3 += 1;
        }
        if(a%5==0){
            total_5 += 1;
        }
    }
    cout << total_3 << " " << total_5;

    return 0;
}