// 12738. 가장 긴 증가하는 부분 수열 3
// 2019.09.30
// lower_bound
#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000001], len, n;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		auto pos = lower_bound(arr + 1, arr + len + 1, k);
		*pos = k;
		if (pos == arr + len + 1)
		{
			len++;
		}
	}
	cout << len << endl;
	return 0;
}
