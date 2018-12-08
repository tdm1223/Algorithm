// 2504. 괄호의 값
// 2018.12.08
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
	}

	if (!stack.empty())
	{
		sum = 0;
	}
	cout << sum << endl;
	return 0;
}
