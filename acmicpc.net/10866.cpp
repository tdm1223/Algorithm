// 10866. 덱
// 2019.03.04
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	deque<int> dq;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "push_front")
		{
			int n;
			cin >> n;
			dq.push_front(n);
		}
		else if (s == "push_back")
		{
			int n;
			cin >> n;
			dq.push_back(n);
		}
		else if (s == "pop_front")
		{
			if (dq.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (s == "pop_back")
		{
			if (dq.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (s == "size")
		{
			cout << dq.size() << endl;
		}
		else if (s == "empty")
		{
			if (dq.empty())
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (s == "front")
		{
			if (dq.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << dq.front() << endl;
			}
		}
		else if (s == "back")
		{
			if (dq.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << dq.back() << endl;
			}
		}
	}
	return 0;
}
