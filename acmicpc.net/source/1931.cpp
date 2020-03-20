// 1931. 회의실 배정
// 2019.05.19
// 그리디 알고리즘
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) // 종료 시간이 같으면
	{
		return a.first < b.first; // 시작시간으로
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
		v[i].first = a; // 회의 시작 시간
		v[i].second = b; // 회의 종료 시간
	}
	// 회의가 끝나는 시간을 기준으로 오름차순 정렬 후 끝나는 시간이 빠른 순으로 회의실을 배정
	sort(v.begin(), v.end(), cmp);

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
