#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int tmp = n;
	int count = 0;
	while (1)
	{
		count++;

		int a = tmp / 10;
		int b = tmp % 10;
		int sum = (a + b) % 10;
		tmp = b * 10 + (a + b) % 10;

		if (tmp == n)
			break;
	}
	cout << count << endl;
}