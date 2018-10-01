// 2846. 오르막 길
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int max = 0;
	int tmp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i + 1] > v[i])
		{
			tmp += (v[i + 1] - v[i]);
		}
		else
		{
			tmp = 0;
		}
		if (tmp > max)
		{
			max = tmp;
		}
	}

	cout << max << endl;
	return 0;
}
