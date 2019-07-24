// 5672. 올해의 조련사
// 2019.07.24
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

int n;
deque<char> dq;
string ans = "";
void go(int left, int right)
{
	left++;
	right--;
	if (left > right)
	{
		while (1)
		{
			ans += dq.front();
			dq.pop_front();

			if (dq.empty())
			{
				break;
			}
			ans += dq.back();
			dq.pop_back();
			if (dq.empty())
			{
				break;
			}
		}
		return;
	}
	if (dq[left] < dq[right])
	{
		ans += dq.front();
		dq.pop_front();
		return;
	}
	else if (dq[right] < dq[left])
	{
		ans += dq.back();
		dq.pop_back();
		return;
	}
	else
	{
		go(left, right);
	}
}
int main()
{
	int t;
	cin >> t;

	for (int testCase = 1; testCase <= t; testCase++)
	{
		cin >> n;
		dq.clear();
		dq.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> dq[i];
		}
		ans = "";
		while (!dq.empty())
		{
			if (dq.back() < dq.front())
			{
				ans += dq.back();
				dq.pop_back();
			}
			else if (dq.front() < dq.back())
			{
				ans += dq.front();
				dq.pop_front();
			}
			else
			{
				go(0, dq.size() - 1);
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
