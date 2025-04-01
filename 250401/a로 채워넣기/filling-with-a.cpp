#include <iostream>
using namespace std;

int main() 
{
    string w;
    cin >> w;

    w[1] = 'a';
    w[w.length()-2] = 'a';

    cout << w;
    return 0;
}