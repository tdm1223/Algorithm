// 9372. 상근이의 여행
// 2019.05.22
// 최소 스패닝 트리, BFS
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;
		}
		// 최소 스패닝 트리를 구성하는 간선은 정점이 n개일 때 n-1개
		cout << n - 1 << endl;
	}
	return 0;
}
