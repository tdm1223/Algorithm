// 9613. GCD 합
// 2018.10.17
#include<iostream>
#include<vector>

using namespace std;

int Gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	Gcd(b, a%b);
}

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		vector<int> v(n);

		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				sum += Gcd(v[i], v[j]);
			}
		}
		cout << sum << endl;
	}
	return 0;
}
