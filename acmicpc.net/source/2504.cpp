// 2504. 괄호의 값
// 2019.05.20
// 스택
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	stack<char> stack;
	int sum = 0;
	int mul = 1; // 가중치
	for (int i = 0; i < s.size(); i++)
	{
		// 여는 괄호 처리
		if (s[i] == '(')
		{
			mul *= 2;
			stack.push(s[i]);
			if (i + 1 < s.size() && s[i + 1] == ')')
			{
				sum += mul;
			}
		}
		else if (s[i] == '[')
		{
			mul *= 3;
			stack.push(s[i]);
			if (i + 1 < s.size() && s[i + 1] == ']')
			{
				sum += mul;
			}
		}

		// 스택이 비어있지 않을 때 닫는 괄호 처리
		if (!stack.empty())
		{
			if (s[i] == ')')
			{
				mul /= 2;
				if (stack.top() == '(')
				{
					stack.pop();
				}
			}
			else if (s[i] == ']')
			{
				mul /= 3;
				if (stack.top() == '[')
				{
					stack.pop();
				}
			}
		}
		// 스택이 비었을때 닫는 괄호가 나오면 올바른 괄호가 아님
		else
		{
			if (s[i] == ')' || s[i] == ']')
			{
				sum = 0;
				break;
			}
		}
	}

	if (!stack.empty())
	{
		sum = 0;
	}
	cout << sum << endl;
	return 0;
}
