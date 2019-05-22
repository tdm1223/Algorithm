// 11586. 지영 공주님의 마법 거울
// 2019.05.22
// 문자열 처리
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	int k;
	cin >> k;
	vector<string> ans;
	switch (k)
	{
	case 1:
		for (int i = 0; i < n; i++)
		{
			ans.push_back(v[i]);
		}
		break;
	case 2:
		for (int i = 0; i < n; i++)
		{
			reverse(v[i].begin(), v[i].end());
			ans.push_back(v[i]);
		}
		break;
	case 3:
		for (int i = n - 1; i >= 0; i--)
		{
			ans.push_back(v[i]);
		}
		break;
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
