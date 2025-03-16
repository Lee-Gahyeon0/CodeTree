#include <iostream>
using namespace std;

void HelloWorld(int a) {
    if (a == 0)
        return;

    HelloWorld(a - 1);
    cout << "HelloWorld"<<endl;
}
int main()
{
    int n;
    cin >> n;

    HelloWorld(n);

    return 0;
}