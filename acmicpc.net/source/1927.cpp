// 1927. 최소 힙
// 2019.07.29
// 자료구조
#include<iostream>
#include<queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	while (n-- > 0)
	{
		int k;
		cin >> k;
		if (k == 0)
		{
			if (q.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
		{
			q.push(k);
		}
	}
	return 0;
}
