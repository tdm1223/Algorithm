#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include<iostream>
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
	if (a.gold != b.gold)
		return a.gold>b.gold;
	else if (a.silver != b.silver)
		return a.silver>b.silver;
	else if (a.bronze != b.bronze)
		return a.bronze>b.bronze;
	else
		return a.total == k;
}

int main() {
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