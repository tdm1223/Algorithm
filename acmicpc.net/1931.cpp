// 1931. 회의실 배정
#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
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
		int a, b;
		cin >> a >> b;
		v[i].first = a;
		v[i].second = b;
	}

	sort(v.begin(), v.end(),cmp);
	int tmp = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (tmp <= v[i].first)
		{
			tmp = v[i].second;
			count++;
		}
	}

	cout << count << endl;
	return 0;
}
