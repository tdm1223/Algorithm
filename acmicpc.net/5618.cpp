// 5618. 공약수
#include<iostream>
#include<vector>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	if (n == 2)
	{
		int minimum = min(v[0], v[1]);
		for (int i = 1; i <= minimum; i++)
		{
			if (v[0] % i == 0 && v[1] % i == 0)
			{
				cout << i << endl;
			}
		}
	}
	if (n == 3)
	{
		int minimum = min(v[0], min(v[1], v[2]));
		for (int i = 1; i <= minimum; i++)
		{
			if (v[0] % i == 0 && v[1] % i == 0 && v[2] % i == 0)
			{
				cout << i << endl;
			}
		}
	}

	return 0;
}
