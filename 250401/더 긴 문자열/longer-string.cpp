#include <iostream>
using namespace std;

int main() 
{
    string w1,w2;
    cin >> w1 >> w2;
    
    if(w1.length() == w2.length()){
        cout << "same";
    }
    else if(w1.length() > w2.length()){
        cout << w1 << " " << w1.length();
    }
    else{
        cout << w2 << " " << w2.length();
    }

     
    
    return 0;
}