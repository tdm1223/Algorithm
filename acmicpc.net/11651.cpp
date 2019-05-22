// 11651. 좌표 정렬하기 2
// 2019.05.22
// 정렬
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
// y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순으로
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
	// 조건에 따라 정렬
	sort(v.begin(), v.end(), compare);
	// 결과 출력
	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}
