// 1922. 네트워크 연결
// 2018.11.30
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

struct computer
{
	int a, b, cost;
	computer(int a, int b, int cost) :a(a), b(b), cost(cost) {}
};

bool compare(computer& A, computer& B)
{
	return A.cost < B.cost;
}

int parent[1001];
int Find(int k)
{
	while (parent[k] != k)
	{
		k = parent[k];
	}
	return k;
}

int main()
{
	int n;
	int m;
	vector<computer> v;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		computer com(a,b,c);
		v.push_back(com);
	}

  // kruskal로 풀기 위해 cost를 기준으로 정렬한다.
	sort(v.begin(), v.end(), compare);
	int ans = 0;
  // 초기화 : parent[i]에 i값을 넣어줌
	for (int i = 1; i <= n; i++)
	{
		parent[i] = i;
	}

	for (int i = 0; i < v.size(); i++)
	{
		int p1 = Find(v[i].a);
		int p2 = Find(v[i].b);
		if (p1 == p2) // 둘이 같다면 연결되어 있는 상태
		{
			continue;
		}

		// 두수를 같은수로 바꿔줌
		if (p1 < p2)
		{
			parent[p1] = p2;
		}
		else
		{
			parent[p2] = p1;
		}
		ans += v[i].cost;
	}

	cout << ans << endl;
	return 0;
}
