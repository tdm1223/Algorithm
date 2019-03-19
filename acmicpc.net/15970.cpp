// 15970. 화살표 그리기
// 2019.03.19
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> v(n + 1);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v[b].push_back(a);
	}

	for (int i = 0; i <= n; i++)
	{
		sort(v[i].begin(), v[i].end());
	}
	int ans = 0;

	// 모든 벡터에 대해서 조사
	for (int i = 0; i <= n; i++)
	{
		// 크기가 0과 1일땐 무시(문제에서 1인 경우는 주어지지않는다고는 써있음)
		if (v[i].size() == 0 || v[i].size() == 1)
		{
			continue;
		}
		// 크기가 2이면 서로가 서로의 최소 거리
		if (v[i].size() == 2)
		{
			ans += (v[i][1] - v[i][0]) * 2;
		}
		else
		{
			ans += v[i][1] - v[i][0]; // 첫번째 점 최소거리
			// 중간점들 최소거리
			for (int j = 1; j < v[i].size() - 1; j++)
			{
				ans += min(v[i][j] - v[i][j - 1], v[i][j + 1] - v[i][j]);
			}
			ans += (v[i][v[i].size() - 1] - v[i][v[i].size() - 2]); // 마지막 점 최소거리
		}
	}
	cout << ans << endl;
	return 0;
}
