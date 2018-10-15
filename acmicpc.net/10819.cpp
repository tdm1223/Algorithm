// 10819. 차이를 최대로
// 2018.10.15
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int ans = 0;
	//모든 순열을 돌면서 차이의 최댓값을 갱신
	do
	{
		int sum = 0;
		for (int i = 1; i < a.size(); i++)
		{
			sum += abs(a[i] - a[i - 1]);
		}
		ans = max(ans, sum);
	} while (next_permutation(a.begin(), a.end()));

	cout << ans << endl;
	return 0;
}
