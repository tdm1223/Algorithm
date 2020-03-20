// 짝지어 제거하기
// 2019.07.09
#include<string>
#include<stack>

using namespace std;

int solution(string s)
{
	int answer = 0;
	stack<char> st;
	st.push(s[0]);
	for (int i = 1; i < s.size(); i++)
	{
		// 스택이 비어있다면 추가
		if (st.empty())
		{
			st.push(s[i]);
		}
		// 스택의 맨 위와 현재 문자가 같다면 스택에서 뻄
		else if (st.top() == s[i])
		{
			st.pop();
		}
		else
		{
			st.push(s[i]);
		}
	}
	// 스택이 비어있다면 짝지어 제거하기 성공
	if (st.empty())
	{
		answer = 1;
	}
	return answer;
}
