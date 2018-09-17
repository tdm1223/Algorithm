// 2493. 탑
#include<queue>
#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

int main()
{
	vector<int> ans;
	stack< pair<int, int> > s;
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		while (!s.empty())
		{
			if (s.top().second > k)
			{
				ans.push_back(s.top().first);
				break;
			}
			s.pop();
		}
		if (s.empty())
			ans.push_back(0);
		s.push(make_pair(i + 1, k));
	}

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	cout << endl;
	return 0;
}
