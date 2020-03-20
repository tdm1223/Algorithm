// 문자열 내 p와 y의 개수
// 2019.03.08
#include<string>
#include<iostream>

using namespace std;

bool solution(string s)
{
	int p = 0;
	int y = 0;
	// 문자열 순회하면서 p나 y인것의 갯수를 구한다.
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'p' || s[i] == 'P')
		{
			p++;
		}
		else if (s[i] == 'y' || s[i] == 'Y')
		{
			y++;
		}
	}
	return p == y;
}
