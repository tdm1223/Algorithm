// 1822. 차집합
// 2019.08.12
// 자료구조
#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int n, m;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	set<int> s;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		s.insert(k);
	}

	for (int i = 0; i < m; i++)
	{
		int k;
		cin >> k;
		auto iter = s.find(k);
		// 존재 하면 제거
		if (iter != s.end())
		{
			s.erase(iter);
		}
		// 존재 하지 않음
		else
		{
			continue;
		}
	}

	cout << s.size() << "\n";
	for (auto iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "\n";

	return 0;
}
