// 2667. 단지번호 붙이기
// 2583과 유사
#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

int arr[26][26]; //단지
bool visit[26][26]; //방문 유무

//상하좌우
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int n;

int dfs(int x, int y)
{
	int cnt = 1;
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (yy < 0 || yy >= n || xx < 0 || xx >= n)
			continue;

		if (arr[xx][yy] && !visit[xx][yy])
		{
			visit[xx][yy] = 1;
			cnt += dfs(xx, yy);
		}
	}
	return cnt;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = s[j] - '0';
		}
	}

	vector<int> area;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visit[i][j] && arr[i][j] == 1)
			{
				visit[i][j] = 1;
				area.push_back(dfs(i, j));
			}
		}
	}

	sort(area.begin(), area.end());
	cout << area.size() << endl;
	for (int i = 0; i < area.size(); i++)
		cout << area[i] << endl;
}
