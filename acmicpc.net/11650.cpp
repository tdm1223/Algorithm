// 11650. 좌표 정렬하기
// 2018.10.16
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<pair<int,int>> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
