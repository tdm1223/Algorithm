#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	stack<char> a;
	int ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(') //여는 괄호면 스택에 추가
			a.push(s[i]);
		else if(s[i]==')') //닫는 괄호일떄
		{
			a.pop();
			if (s[i - 1] == '(') //앞이 여는괄호 즉 레이저라면
			{
				ans += a.size(); //잘린 갯수 추가
			}
			else if (s[i - 1] == ')') //앞도 닫는괄호이면
			{
				ans++; // 닫혀서 잘려진 갯수 추가
			}
		}
	}

	cout << ans << endl;
}