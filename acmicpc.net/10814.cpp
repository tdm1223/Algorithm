// 10814. 나이순 정렬
// 2019.05.22
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
// 나이순으로 정렬
bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int,string>> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	//순서를 보장하는 정렬
	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		// 시간초과를 방지하기 위해 endl 대신 \n사용
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}
