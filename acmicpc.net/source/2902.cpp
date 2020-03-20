// 2902. KMP는 왜 KMP일까?
// 2019.05.21
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	string ans;
	cin >> s;

	// 맨 처음 문자와 -뒤의 문자들을 추가한 답을 출력하면된다.
	ans += s[0];
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '-')
		{
			ans += s[i + 1];
		}
	}

	cout << ans << endl;
	return 0;
}
