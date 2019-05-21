// 5567. 결혼식
// 2019.05.21
// 구현, 그래프 이론
#include<iostream>

using namespace std;

bool isFriends[501];
bool graph[501][501];
int main()
{
	int n, m;
	cin >> n >> m;
  // 친구 관계 저장
	for (int i = 0; i<m; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
		if (a == 1) // 상근이의 친구 저장
		{
			isFriends[b] = 1;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (graph[1][i] == 1) // 상근이의 친구일때
		{
			for (int j = 2; j <= n; j++) // 친구의 친구 저장
			{
				if (graph[i][j] == 1)
				{
					isFriends[j] = 1;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 2; i <= n; i++)
	{
		if (isFriends[i] == 1)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
