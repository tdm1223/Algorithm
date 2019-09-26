// 11725. 트리의 부모 찾기
// 2019.09.26
// DFS
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> tree[100001];
int visit[100001];
int parents[100001];
void dfs(int cnt)
{
	visit[cnt] = 1;

	for (int i = 0; i < tree[cnt].size(); i++)
	{
		int child = tree[cnt][i];
		if (!visit[child])
		{
			parents[child] = cnt;
			dfs(child);
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		int x, y;
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	// 1이 루트이므로 1부터 DFS
	dfs(1);
	for (int i = 2; i <= n; i++)
	{
		cout << parents[i] << "\n";
	}
	return 0;
}
