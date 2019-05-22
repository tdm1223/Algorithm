// 15686. 치킨 배달
// 2019.05.22
// 브루트 포스
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int map[51][51];
int n, m;
vector<pair<int, int>> chickens; // 치킨집들의 위치를 모아놓는 벡터
vector<pair<int, int>> houses; // 집들의 위치를 모아놓는 벡터
int arr[13];
int visit[13];
int ans = 987654321;
// 치킨집들중 m개를 고르기
void go(int cnt, int start)
{
	if (cnt == m)
	{
		int sum = 0;

		// 각각의 집에서 치킨집과의 거리중 최솟값을 sum에 더해줌
		for (int i = 0; i < houses.size(); i++)
		{
			int tmp = 100000;
			for (int j = 0; j < m; j++)
			{
        // 거리 계산
				tmp = min(tmp, abs(chickens[arr[j]].first - houses[i].first) + abs(chickens[arr[j]].second - houses[i].second));
			}
			sum += tmp;
		}

		ans = min(ans, sum);
		return;
	}

	for (int i = start; i < chickens.size(); i++)
	{
		if (!visit[i])
		{
			arr[cnt] = i;
			visit[i] = true;
			go(cnt + 1, i);
			visit[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 2) // 치킨집
			{
				chickens.push_back({ i,j });
			}
			if (map[i][j] == 1) // 집
			{
				houses.push_back({ i,j });
			}
		}
	}

	go(0,0);
	cout << ans << endl;
	return 0;
}
