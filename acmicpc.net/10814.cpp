// 10814. 나이순 정렬
// 2018.10.15
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

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

	stable_sort(v.begin(), v.end(), compare); //순서를 보장하는 정렬

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << "\n"; //시간초과를 방지하기 위해 endl 대신 \n사용
	}

	return 0;
}
