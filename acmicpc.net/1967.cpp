// 1967. 트리의 지름
// 2019.05.19
// BFS, 트리
#include<vector>
#include<iostream>

using namespace std;

int n;
int ans;
vector<pair<int, int>> v[10001];
int DFS(int start)
{
	int first = 0;
	int second = 0;
	int sum;
	// 인접노드 지점으로 DFS
	// 자식노드 가중치의 합을 기준으로 1,2번째 값을 first, second로 지정
	for (int i = 0; i < v[start].size(); i++)
	{
		sum = DFS(v[start][i].first) + v[start][i].second;
		if (sum > first) // sum, first, second순이므로 first를 sum으로 second를 first로 갱신
		{
			second = first;
			first = sum;
		}
		else if (sum > second) // first, sum, second 순이므로 second를 sum으로 갱신
		{
			second = sum;
		}
	}
	//최댓값 갱신
	if (ans < (first + second))
	{
		ans = first + second;
	}
	return first;
}
int main()
{
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		int a, b, w;
		cin >> a >> b >> w;
		v[a].push_back({ b,w });
	}

	DFS(1);

	cout << ans << endl;
	return 0;
}
