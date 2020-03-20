// 10866. 덱
// 2019.05.22
// 덱
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
		// push_front
		if (s == "push_front")
		{
			int n;
			cin >> n;
			dq.push_front(n);
		}
		// push_back
		else if (s == "push_back")
		{
			int n;
			cin >> n;
			dq.push_back(n);
		}
		// pop_front
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
		// pop_back
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
		// size
		else if (s == "size")
		{
			cout << dq.size() << endl;
		}
		// empty
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
		// front
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
		// back
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
