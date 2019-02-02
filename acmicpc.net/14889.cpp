// 14889. 스타트와 링크
// 2019.02.02
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n;
bool visit[21];
int d[21][21];
int ans = 987654321;

// player번 선수를 스타트 팀으로 뽑는다, cnt : 뽑은 명수
void StartLink(int player, int cnt)
{
	// 팀을 나눴다면 차이 계산
	if (cnt == n / 2)
	{
		vector<int> start;
		vector<int> link;

		for (int i = 0; i < n; i++)
		{
			if (visit[i])
			{
				link.push_back(i);
			}
			else
			{
				start.push_back(i);
			}
		}

		// 능력치 차이 구하기
		int startSum = 0;
		int linkSum = 0;
		for (int i = 0; i < n / 2; i++)
		{
			for (int j = i + 1; j < n / 2; j++)
			{
				int sx = link[i];
				int sy = link[j];
				int lx = start[i];
				int ly = start[j];
				startSum += d[sx][sy] + d[sy][sx];
				linkSum += d[lx][ly] + d[ly][lx];
			}
		}
		ans = min(ans, abs(startSum - linkSum));
		return;
	}

	// 완전탐색으로 팀을 나누는 과정
	for (int i = player + 1; i < n; i++)
	{
		if (visit[i] == false)
		{
			visit[i] = true;
			StartLink(i, cnt + 1);
			visit[i] = false;
		}
	}
}

int main()
{
	scanf("%d", &n);
	// 입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &d[i][j]);
		}
	}
	StartLink(0, 0);
	printf("%d\n", ans);
	return 0;
}
