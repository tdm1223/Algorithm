// 17298. 오큰수
// 2019.09.26
// 스택
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> ans(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		ans[i] = -1;
	}

	stack<int> s;
	for (int i = n - 1; i >= 0; i--)
	{
		// 맨처음값 추가용
		if (s.empty())
		{
			s.push(v[i]);
		}
		else
		{
			while (!s.empty())
			{
				// 스택의 맨 위 값이 현재 값보다 크면 그게 오큰수가 된다.
				if (s.top() > v[i])
				{
					ans[i] = s.top();
					s.push(v[i]);
					break;
				}
				else
				{
					s.pop();
				}
			}
			// 스택이 비어있다면 현재 값을 스택에 넣어서 비어있지 않도록함
			if (s.empty())
			{
				s.push(v[i]);
			}
		}
	}

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
