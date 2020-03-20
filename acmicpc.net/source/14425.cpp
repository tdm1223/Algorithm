// 14425. 문자열 집합
// 2019.09.14
// 문자열 처리
#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	set<string> set;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		set.insert(s);
	}

	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if (set.find(s) != set.end())
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
