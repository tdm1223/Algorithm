// 3499. 퍼펙트 셔플
// 2019.08.15
#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int n;
		cin >> n;
		string s;
		queue<string> q1;
		queue<string> q2;
		if (n % 2 == 0)
		{
			for (int i = 0; i < n; i++)
			{
				cin >> s;
				if (i < n / 2)
				{
					q1.push(s);
				}
				else
				{
					q2.push(s);
				}
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				cin >> s;
				if (i <= n / 2)
				{
					q1.push(s);
				}
				else
				{
					q2.push(s);
				}
			}
		}

		cout << "#" << testCase << " ";
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				cout << q1.front() << " ";
				q1.pop();
			}
			else
			{
				cout << q2.front() << " ";
				q2.pop();
			}
		}
		cout << "\n";
	}
	return 0;
}
