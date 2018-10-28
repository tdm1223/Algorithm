// 2439. 별찍기 - 2
// 2018.10.28
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = i; j >0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
