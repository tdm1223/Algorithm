// 1874. 스택 수열
// 2019.05.18
// 스택
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
	// 만들 수열 입력
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	stack<int> ans;
	int cnt = 1;
	string answer = "";
	for (int i = 0; i < n; i++)
	{
		// 수열 값이 현재 cnt보다 크면 push해서 cnt를 수열 값으로 만들어준다.
		while (v[i] >= cnt)
		{
			ans.push(cnt++);
			answer += '+';
		}
		// 스택의 맨 위가 만드려는 현재 수열 값이면 pop
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
