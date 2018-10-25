// 2012.등수 매기기
// 2018.10.25
#include<iostream>
#include<algorithm>
#include<vector>

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

  //예상 등수 정렬 후 1부터 순차적으로 비교
	sort(v.begin(), v.end());
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += (abs(v[i] - (i + 1)));
	}

	cout << ans << endl;
	return 0;
}
