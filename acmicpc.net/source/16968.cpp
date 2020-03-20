// 16968. 차량 번호판 1
// 2019.05.26
// 브루트 포스
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int ans;
string s;
int main()
{
	cin >> s;
	// 숫자면 10개
	if (s[0] == 'd')
	{
		ans = 10;
	}
	// 문자면 26개
	else
	{
		ans = 26;
	}
	for (int i = 1; i < s.size(); i++)
	{
		// 앞의 문자와 다르다면 그냥 곱해줌
		if (s[i] != s[i - 1])
		{
			if (s[i] == 'd')
			{
				ans *= 10;
			}
			else
			{
				ans *= 26;
			}
		}
		// 앞의 문자와 같다면 1을 빼고 곱해줌
		else
		{
			if (s[i] == 'd')
			{
				ans *= 9;
			}
			else
			{
				ans *= 25;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
