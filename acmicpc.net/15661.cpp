// 15661. 링크와 스타트
// 2019.09.26
// 브루트 포스
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n;
bool visit[21];
int score[21][21];
int ans = 987654321;

// start번 선수를 스타트 팀으로 뽑는다, cnt : 뽑은 명수
void go(int start, int cnt, int m)
{
	// 팀을 나눴다면 차이 계산
	if (cnt == m)
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
		if (start.size() == 1)
		{
			startSum = 0;
		}
		else
		{
			for (int i = 0; i < start.size(); i++)
			{
				for (int j = i + 1; j < start.size(); j++)
				{
					int sx = start[i];
					int sy = start[j];
					startSum += score[sx][sy] + score[sy][sx];
				}
			}
		}
		if (link.size() == 1)
		{
			linkSum = 0;
		}
		else
		{
			for (int i = 0; i < link.size(); i++)
			{
				for (int j = i + 1; j < link.size(); j++)
				{

					int lx = link[i];
					int ly = link[j];
					linkSum += score[lx][ly] + score[ly][lx];
				}
			}
		}
		ans = min(ans, abs(startSum - linkSum));
		return;
	}

	// 완전탐색으로 팀을 나누는 과정
	for (int i = start; i < n; i++)
	{
		if (visit[i] == false)
		{
			visit[i] = true;
			go(i + 1, cnt + 1, m);
			visit[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;

	// 입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> score[i][j];
		}
	}

	for (int i = 1; i <= n / 2; i++)
	{
		go(0, 0, i);
	}

	cout << ans << "\n";
	return 0;
}
