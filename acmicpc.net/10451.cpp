// 10451. 순열 사이클
// 2019.08.05
// DFS
#include<iostream>
#include<vector>

using namespace std;

int visit[1001];
vector<pair<int, int>> v;
// DFS로 사이클 체크하는 함수
void DFS(int num)
{
	// 아직 방문하지 않음
	if (!visit[num])
	{
		visit[num] = true;
		DFS(v[num].second);
	}
}
int main()
{
	int t;
	cin >> t;
	for (int testCase = 0; testCase < t; testCase++)
	{
		int n;
		cin >> n;
		fill(visit, visit + 1001, 0);
		v.clear(); // 벡터 비움
		v.resize(n); // 크기 재조정
		for (int i = 1; i <= n; i++)
		{
			int k;
			cin >> k;
			v[i - 1] = { i - 1,k - 1 };
		}
		int cnt = 0;

		for (int i = 0; i < v.size(); i++)
		{
			// 아직 방문하지 않음
			if (!visit[v[i].first])
			{
				visit[v[i].first] = 1; // 방문 표시
				DFS(v[i].second);
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
