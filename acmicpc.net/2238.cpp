// 2238. 경매
// 2019.05.20
// 시뮬레이션
#include<iostream>
#include<string>
#include<map>

using namespace std;

int cost[10001]; // 물건가격
int main()
{
	int u, n;
	cin >> u >> n;
  // 가장 처음 입찰한 사람이 물품을 가져가기 때문에 map 사용
	map<int, string> map;
	for (int i = 0; i < n; i++)
	{
		string a;
		int b;
		cin >> a >> b;
		map.insert({ b,a });
		cost[b]++;
	}

	int min = 100000;
	for (int i = 1; i <= u; i++)
	{
		if (min > cost[i] && cost[i]>0)
		{
			min = cost[i];
		}
	}

	for (int i = 1; i <= u; i++)
	{
		if (cost[i] == min)
		{
			cout << map[i] << " " << i << endl;
			break;
		}
	}
	return 0;
}
