// 2493. 탑
// 2018.10.15
#include<iostream>
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
		while (!s.empty()) //탑이 있을 경우
		{
			//탑의 높이를 비교 하여 큰게 있을때까지 pop함.
			if (s.top().second > k)
			{
				ans.push_back(s.top().first);
				break;
			}
			s.pop();
		}
		if (s.empty())
		{
			ans.push_back(0);//탑이 없을 경우 0을 추가
		}
		s.push({ i + 1, k });
	}

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
