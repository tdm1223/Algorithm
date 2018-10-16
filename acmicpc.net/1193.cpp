// 1193. 분수찾기
// 2018.10.16
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = 1;
	if (n == 1)
	{
		cout << 1 << "/" << 1 << endl;
		return 0;
	}
	while (1)
	{
		n -= k;
		k++;
		if (k >= n)
		{
			break;
		}
	}
	int x = k + 1;
	if (k % 2 == 0)
	{
		cout << n << "/" << x - n << endl;
	}
	else
	{
		cout << x - n << "/" << n << endl;
	}

	return 0;
}
