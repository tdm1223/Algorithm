// 10799. 쇠막대기
// 2019.05.22
// 스택
// https://tdm1223.tistory.com/63
#include<iostream>
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
		if (s[i] == '(')
		{
			a.push(s[i]);
		}
		else if (s[i] == ')')
		{
			a.pop();
			// 레이저일땐 스택의 크기만큼 더함
			if (s[i - 1] == '(')
			{
				ans += a.size();
			}
			else if (s[i - 1] == ')')
			{
				ans++;
			}
		}
	}
	// 결과 출력
	cout << ans << endl;
	return 0;
}
