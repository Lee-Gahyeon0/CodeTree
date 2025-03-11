#include <iostream>

using namespace std;

int line_num;

void PrintingLine(int n);

int main()
{
	cin >> line_num;

	PrintingLine(line_num);

	return 0;
}

void PrintingLine(int n)
{
	for (int i = 0; i < n; i++)
		cout << "12345^&*()_" << endl;
}
