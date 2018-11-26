// 11652. 카드
// 2018.11.26
#include<iostream>
#include<map>

using namespace std;

int main()
{
	// 범위가 -2^64 ~ 2^64
	map<long long, int> map; // 수의 개수를 저장하는 맵
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		if (map.find(a) == map.end())
		{
			map[a] = 1;
		}
		else
		{
			map[a]++;
		}
	}

	long long ans = 0;
	int max = 0;
	for (auto iter = map.begin(); iter != map.end(); iter++)
	{
		if (iter->second > max)
		{
			max = iter->second;
			ans = iter->first;
		}
	}
	cout << ans << endl;
	return 0;
}
