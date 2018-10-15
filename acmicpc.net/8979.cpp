// 8979. 올림픽
// 2018.10.15
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

class medal
{
public:
	int total;
	int gold;
	int silver;
	int bronze;
};

int n, k;
vector<medal> v;

bool comp(medal a, medal b)
{
	if (a.gold != b.gold)//금
	{
		return a.gold > b.gold;
	}
	else if (a.silver != b.silver)//은
	{
		return a.silver > b.silver;
	}
	else if (a.bronze != b.bronze)//동
	{
		return a.bronze > b.bronze;
	}
	else//총개수
	{
		return a.total == k;
	}
}

int main()
{
	medal medal;
	cin >> n >> k;
	for (int i = 0; i<n; i++)
	{
		cin >> medal.total >> medal.gold >> medal.silver >> medal.bronze;
		v.push_back(medal);
	}

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i<n; i++)
	{
		if (v[i].total == k)
		{
			cout << i + 1 << endl;
		}
	}
	return 0;
}
