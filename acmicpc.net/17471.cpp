// 17471. 게리맨더링
// 2020.02.19
// DFS, BFS, 그래프
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;

int map[11][11];
int people[11];
int visit[11];
int n;
vector<int> firstRegion;
vector<int> secondRegion;
int ans = 987654321;

// v에 있는 값들의 위치를 모두 이으면 연결 되는지 확인
bool isConnected(vector<int>& v)
{
	int check[11];
	fill(check, check + 11, 0);
	for (int i = 0; i < v.size(); i++)
	{
		check[v[i]] = 1;
	}

	// 1개는 무조건 연결
	if (v.size() == 1)
	{
		return true;
	}

	queue<int> q;
	q.push(v[0]);
	while (!q.empty())
	{
		int i = q.front();
		q.pop();
		for (int j = 1; j <= n; j++)
		{
			// 연결 되어 있는지 확인
			// 연결 되어 있다면 큐에 넣고 check[j]=0으로 바꿈
			if (map[i][j] == 1 && check[j] == 1)
			{
				q.push(j);
				check[j] = 0;
			}
		}
	}

	// v에 있는 정점들이 서로 연결 되어있는지 확인 -> check배열이 모두 0인지
	bool flag = true;
	for (int i = 1; i <= n; i++)
	{
		if (check[i] == 1)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

// 두가지로 나누는 함수
void go(int cnt, int m, int start)
{
	if (cnt == m)
	{
		// 두 가지로 나눠서 저장
		for (int i = 1; i <= n; i++)
		{
			if (!visit[i])
			{
				firstRegion.push_back(i);
			}
			else
			{
				secondRegion.push_back(i);
			}
		}

		// 두개 모두 연결되었다면
		if (isConnected(firstRegion) && isConnected(secondRegion))
		{
			int sum1 = 0;
			int sum2 = 0;
			for (int i = 0; i < firstRegion.size(); i++)
			{
				sum1 += people[firstRegion[i]];
			}
			for (int i = 0; i < secondRegion.size(); i++)
			{
				sum2 += people[secondRegion[i]];
			}
			ans = min(ans, abs(sum1 - sum2));
		}
		// 나웠던 벡터 비워줌
		firstRegion.clear();
		secondRegion.clear();
		return;
	}

	for (int i = start; i <= n; i++)
	{
		if (!visit[i])
		{
			visit[i] = 1;
			go(cnt + 1, m, i + 1);
			visit[i] = 0;
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> people[i];
	}
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			int x;
			cin >> x;
			map[i][x] = 1;
			map[x][i] = 1;
		}
	}

	for (int i = 1; i <= n / 2; i++)
	{
		for (int i = 1; i <= 10; i++)
		{
			visit[i] = 0;
		}
		go(0, i, 1);
	}

	if (ans == 987654321)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << ans << endl;
	}
	return 0;
}
