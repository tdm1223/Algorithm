// 4631. Symmetric Order
// 2019.09.05
// 구현, 영어문제
#include<iostream>
#include<vector>
#include<string>
#include<deque>

using namespace std;

int main()
{
	int cnt = 1;
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		vector<string> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}

		deque<string> dq;
		if (n % 2 == 0)
		{
			for (int i = n - 1; i >= 0; i--)
			{
				if (i % 2 == 0)
				{
					dq.push_front(v[i]);
				}
				else
				{
					dq.push_back(v[i]);
				}
			}
		}
		else
		{
			dq.push_back(v[v.size() - 1]);
			for (int i = v.size() - 2; i >= 0; i--)
			{
				if (i % 2 == 0)
				{
					dq.push_front(v[i]);
				}
				else
				{
					dq.push_back(v[i]);
				}
			}
		}
		cout << "SET " << cnt << endl;
		for (int i = 0; i < dq.size(); i++)
		{
			cout << dq[i] << endl;
		}
		cnt++;
	}
	return 0;
}
