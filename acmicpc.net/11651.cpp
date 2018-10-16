// 11651. 좌표 정렬하기 2
// 2018.10.16
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

bool compare(pair<int,int> &a, pair<int,int> &b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	else
	{
		return a.second < b.second;
	}
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
