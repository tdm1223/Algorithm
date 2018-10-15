// 5598. 카이사르 암호
// 2018.10.15
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string ans="";
	for (int i = 0; i < s.size(); i++)
	{
		//A,B,C에 대해서만 예외 처리
		if (s[i] == 'A')
		{
			ans += 'X';
		}
		else if (s[i] == 'B')
		{
			ans += 'Y';
		}
		else if (s[i] == 'C')
		{
			ans += 'Z';
		}
		else
		{
			ans += s[i] - 3;
		}
	}
	
	cout << ans << endl;
	return 0;
}
