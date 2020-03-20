// 1918. 후위표기식
// 2019.05.19
// 스택
#include<iostream>
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
		if (s[i] >= 'A' && s[i] <= 'Z') // 문자라면 답에 추가
		{
			ans += s[i];
		}
		else if (s[i] == '(') // 여는 괄호라면 스택에 푸시
		{
			stack.push(s[i]);
		}
		else if (s[i] == ')') // 닫는 괄호라면
		{
			while (stack.top() != '(') // 여는 괄호가 나올때까지 답에 추가
			{
				ans += stack.top();
				stack.pop();
			}
			stack.pop();
		}
		else if (s[i] == '*' || s[i] == '/') // 연산자 곱셈과 나눗셈일때
		{
			// 같은 우선순위의 연산자를 만날때까지 답에 추가하고 연산자를 스택에 푸시
			while (!stack.empty() && (stack.top() == '*' || stack.top() == '/'))
			{
				ans += stack.top();
				stack.pop();
			}
			stack.push(s[i]);
		}
		else if (s[i] == '+' || s[i] == '-') // 연산자 덧셈과 뺄셈일때
		{
			// 여는 괄호가 나올때까지 답에 추가하고 연산자를 스택에 푸시
			while (!stack.empty() && stack.top() != '(')
			{
				ans += stack.top();
				stack.pop();
			}
			stack.push(s[i]);
		}
	}

	while (!stack.empty()) // 스택에 있는 나머지 추가
	{
		ans += stack.top();
		stack.pop();
	}

	cout << ans << endl;
	return 0;
}
