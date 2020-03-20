// 1494. 사랑의 카운슬러
// 2019.07.20
#include<vector>
#include<iostream>

using namespace std;

int t, n;
int visited[21];
pair<int, int> p[21];
long long res;
void DFS(int v, int cnt)
{
	if (cnt == n / 2)
	{
		vector<pair<int, int>> a;
		vector<pair<int, int>> b;
		for (int i = 0; i < n; i++)
		{
			if (visited[i])
			{
				a.emplace_back(p[i]);
			}
			else
			{
				b.emplace_back(p[i]);
			}
		}

		long long x = 0;
		long long y = 0;
		for (int i = 0; i < n / 2; i++)
		{
			x += (a[i].first - b[i].first);
			y += (a[i].second - b[i].second);
		}
		// res를 최솟값으로 갱신. 맨처음엔 -1로 초기화하므로 두번째 조건은 맨처음일때 계산하는 조건
		if (res > y * y + x * x || res == -1)
		{
			res = y * y + x * x;
		}
		return;
	}

	// 2개의 그룹으로 나눔
	for (int i = v + 1; i < n; i++)
	{
		if (!visited[i])
		{
			visited[i] = 1;
			DFS(i, cnt + 1);
			visited[i] = 0;
		}
	}
}

void init()
{
	for (int i = 0; i < 21; i++)
	{
		visited[i] = 0;
		p[i].first = 0;
		p[i].second = 0;
	}
	res = -1;
}

int main()
{
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		init();
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			p[i].first = a;
			p[i].second = b;
		}
		DFS(0, 0);
		printf("#%d %lld\n", testCase, res);
	}
	return 0;
}
