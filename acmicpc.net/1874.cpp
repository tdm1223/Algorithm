// 1874. 스택 수열
// 2018.10.14
#include<iostream>
#include<string>
#include<stack>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	stack<int> ans;
	int cnt = 1;
	string answer = "";
	for (int i = 0; i < n; i++)
	{
		while (v[i] >= cnt)
		{
			ans.push(cnt++);
			answer += '+';
		}
		if (ans.top() == v[i])
		{
			answer += '-';
			ans.pop();
		}
		else
		{
			cout << "NO" << "\n";
			return 0;
		}
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << "\n";
	}

	return 0;
}
