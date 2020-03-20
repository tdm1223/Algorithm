// 8658. Summation
// 2019.10.19
#include<iostream>
#include<algorithm>

using namespace std;

int calc(int k)
{
	int n = 0;
	while (k > 0)
	{
		n += k % 10;
		k /= 10;
	}
	return n;
}
int main()
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int maxVal = -1;
		int minVal = 987654231;
		for (int i = 0; i < 10; i++)
		{
			int k;
			cin >> k;
			int x = calc(k);
			maxVal = max(maxVal, x);
			minVal = min(minVal, x);
		}
		cout << "#" << test_case << " " << maxVal << " " << minVal << "\n";
	}
	return 0;
}
