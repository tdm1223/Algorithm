// 3022. 식사 예절
// 2019.05.21
// 자료구조
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, int> map;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		string s;
		cin >> s;
		if (map.find(s) == map.end())
		{
			map[s] = 1;
		}
		else
		{
			map[s]++;
		}
		// 현재 고른아이의 개수 - 나머지 아이들의 합이 1을 넘으면 혼나게됨
		if (map[s] - (i - map[s]) > 1)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
