// 1918. 후위표기식
#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string s;
	string ans = "";
	cin >> s;
	stack<char> stack;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			ans += s[i];
		else if (s[i] == '(')
			stack.push(s[i]);
		else if (s[i] == ')')
		{
			while (stack.top() != '(')
			{
				ans += stack.top();
				stack.pop();
			}
			stack.pop();
		}
		else if (s[i] == '*' || s[i] == '/')
		{
			while (!stack.empty() && (stack.top() == '*' || stack.top() == '/'))
			{
				ans += stack.top();
				stack.pop();
			}
			stack.push(s[i]);
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			while (!stack.empty() && stack.top() != '(')
			{
				ans += stack.top();
				stack.pop();
			}
			stack.push(s[i]);
		}

	}

	while (!stack.empty())
	{
		ans += stack.top();
		stack.pop();
	}

	cout << ans << endl;

	return 0;
}
