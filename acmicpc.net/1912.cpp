// 1912. 연속합
#include <iostream>

using namespace std;

int num[100001];
int d[100001];
int main()
{
	int n;

	int max;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	d[0] = num[0];
	for (int i = 1; i < n; i++)
	{
		d[i] = d[i - 1] + num[i] > num[i] ? d[i - 1] + num[i] : num[i];
	}
	max = d[0];
	for (int i = 1; i < n; i++)
		if (d[i] > max)
			max = d[i];

	cout << max << endl;
}
