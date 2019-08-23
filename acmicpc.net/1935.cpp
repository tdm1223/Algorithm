// 1935. 후위 표기식2
// 2019.08.23
// 자료구조
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int alpa[26];
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	for (int i = 0; i < n; i++)
	{
		cin >> alpa[i];
	}

	stack<double> stack;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '+')
		{
			double first = stack.top();
			stack.pop();
			double second = stack.top();
			stack.pop();
			stack.push(first + second);
		}
		else if (s[i] == '-')
		{
			double first = stack.top();
			stack.pop();
			double second = stack.top();
			stack.pop();
			stack.push(second - first);
		}
		else if (s[i] == '*')
		{
			double first = stack.top();
			stack.pop();
			double second = stack.top();
			stack.pop();
			stack.push(first * second);
		}
		else if (s[i] == '/')
		{
			double first = stack.top();
			stack.pop();
			double second = stack.top();
			stack.pop();
			stack.push(second / first);
		}
		else
		{
			stack.push(alpa[s[i]-'A']);
		}
	}
	printf("%.2lf\n", stack.top());
	return 0;
}
