// 2667. 
#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

bool visit[26][26];
int arr[26][26], num[1000], cnt;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

void dfs(int x, int y, int n)
{
	visit[x][y] = true;
	num[cnt]++;
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (0 <= xx && xx < n && 0 <= yy && yy < n)
		{
			if (!visit[xx][yy] && arr[xx][yy]) 
				dfs(xx, yy,n);
		}
	}
}
int main()
{
	int n;
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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visit[i][j] && arr[i][j])
			{
				dfs(i, j, n);
				cnt++;
			}
		}
	}

	sort(num, num + cnt);
	cout << cnt << endl;
	for (int i = 0; i < cnt; i++)
		cout << num[i] << endl;
}
