// 1717. 집합의 표현
// 2019.03.26
#include<iostream>

using namespace std;

int parent[1000001];

// 초기화
void MakeSet(int v)
{
	parent[v] = v;
}

// v의 최상위 노드 찾기
int FindSet(int v)
{
	if (v == parent[v])
	{
		return v;
	}
	parent[v] = FindSet(parent[v]);

	return parent[v];
}

// u를 v의 부분집합으로 넣기
void UnionSet(int u, int v)
{
	parent[FindSet(u)] = FindSet(v);
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		MakeSet(i);
	}

	for (int i = 0; i < m; i++)
	{
		int cnt, a, b;
		scanf("%d %d %d", &cnt, &a, &b);
		if (cnt == 0)
		{
			UnionSet(a, b);
		}
		else
		{
			if (FindSet(a) == FindSet(b))
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}
	return 0;
}
