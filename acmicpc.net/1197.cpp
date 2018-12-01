// 1197. 최소 스패닝 트리
// 2018.12.01
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Node
{
	int a, b, cost;
	Node(int a, int b, int cost) :a(a), b(b), cost(cost) {}
};

bool compare(Node& A, Node& B)
{
	return A.cost < B.cost;
}

int parent[10001];
int Find(int k)
{
	while (parent[k] != k)
	{
		k = parent[k];
	}
	return k;
}
int visit[1001];
int main()
{
	int n;
	int m;
	vector<Node> v;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		Node com(a, b, c);
		v.push_back(com);
	}

	sort(v.begin(), v.end(), compare);
	int ans = 0;
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
