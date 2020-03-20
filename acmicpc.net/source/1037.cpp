// 1037. 약수
// 2019.05.14
// 수학
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int ans = 0;
	int tmp = 0;
	if (n == 1) // 약수의 개수가 1개라면 제곱
	{
		ans = v[0] * v[0];
	}
	else
	{
		sort(v.begin(), v.end());
		ans = v[0] * v[n - 1]; // 최솟값 * 최댓값
	}
	cout << ans << endl;
	return 0;
}
