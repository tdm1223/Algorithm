// 8673. 코딩 토너먼트1
// 2019.10.19
#include<iostream>
#include<algorithm>
#include<list>
#include<cmath>

using namespace std;

int main()
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int k;
		cin >> k;
		list<int> l;
		int ans = 0;
		for (int i = 0; i < 2 << (k - 1); i++)
		{
			int x;
			cin >> x;
			l.push_back(x);
		}

		while (l.size() != 1)
		{
			int x = l.front();
			l.pop_front();
			int y = l.front();
			l.pop_front();
			ans += abs(x - y);
			l.push_back(max(x, y));
		}
		cout << "#" << test_case << " " << ans << "\n";
	}
	return 0;
}
