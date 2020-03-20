// 올바른 괄호
// 2019.06.28
// 스택
#include<string>

using namespace std;

bool solution(string s)
{
	bool answer = false;
	int open = 0;
	int close = 0;
	for (int i = 0; i<s.size(); i++)
	{
		if (s[i] == '(')
		{
			open++;
		}
		else if (s[i] == ')')
		{
			close++;
		}
		if (close > open) // 닫는 괄호의 수가 더 많아졌다면 잘못된 괄호
		{
			break;
		}
	}
	if (open == close)
	{
		answer = true;
	}
	return answer;
}
