// 14469. 소가 길을 건너간 이유 3
// 2019.10.21
// 구현
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> p;
	for (int i = 0; i < n; i++)
	{
		pair<int, int> tmp;
		cin >> tmp.first >> tmp.second;
		p.push_back(tmp);
	}

	int ans = 0;
	// 첫번째 인자로(도착한 시간) 오름차순 정렬
	sort(p.begin(), p.end());
	for (int i = 0; i < n; i++)
	{
		// 시간까지 옮겨줌
		if (ans < p[i].first)
		{
			ans = p[i].first;
		}
		// 검문시간을 더해줌
		ans += p[i].second;
	}
	cout << ans << endl;
	return 0;
}
