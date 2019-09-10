// 14467. 소가 길을 건너간 이유 1
// 2019.09.10
// 구현
#include<iostream>
#include<map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	map<int, int> maps;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (maps.find(x) != maps.end()) // 관찰 기록이 있음
		{
			if (maps[x] != y) // 위치가 다르면 값 증가
			{
				maps[x] = y;
				ans++;
			}
		}
		else // 처음 관찰
		{
			maps.insert({ x,y });
		}
	}
	cout << ans << endl;
	return 0;
}
