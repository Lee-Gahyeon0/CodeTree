#include <iostream>
using namespace std;

int main()
{
    int input_a, input_b;
  
    cin >> input_a >> input_b;

    double a = (double)input_a;
    double b = (double)input_b;
    double total = a + b;
    double avg = total / 2;

    cout << total << " " ;
    cout << fixed;
    cout.precision(1);
    cout << avg;

    return 0;
}