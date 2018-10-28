// 2739. 구구단
// 2018.10.28
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i < 10; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
	return 0;
}
