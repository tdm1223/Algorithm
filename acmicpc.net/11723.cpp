// 11723. 집합
// 2019.03.28
#include<iostream>
#include<algorithm>
#include<set>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++)
	{
		string order;
		int x;
		cin >> order;

		switch (order[1])
		{
		case 'd': // add
			cin >> x;
			s.insert(x);
			break;
		case 'e': // remove
			cin >> x;
			s.erase(x);
			break;
		case 'h': //check
			cin >> x;
			if (s.find(x) != s.end())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
			break;
		case 'o': // toggle
			cin >> x;
			if (s.find(x) != s.end())
			{
				s.erase(x);
			}
			else
			{
				s.insert(x);
			}
			break;
		case 'l': // all
			for (int i = 1; i <= 20; i++)
			{
				s.insert(i);
			}
			break;
		case 'm': // empty
			s.clear();
			break;
		}
	}
	return 0;
}