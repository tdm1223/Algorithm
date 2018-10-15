// 2217. 로프
// 2018.10.15
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

	//내림차순 정렬
	sort(v.begin(), v.end(), greater<int>());

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		// i개를 사용하면 v[i]와 (i+1)을 곱한값이 최대 무게가 된다.
		int weight = v[i] * (i + 1);
		ans = max(ans, weight);
	}

	cout << ans << endl;
	return 0;
}
