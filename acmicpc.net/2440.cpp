// 2440. 별찍기 - 3
// 2018.10.28
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
