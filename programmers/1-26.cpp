// 문자열 다루기 기본
// 2018.10.29
#include<string>

using namespace std;

bool solution(string s)
{
	bool answer = true;
	//길이가 4혹은 6인지 체크
	if (s.size() != 4 && s.size() != 6)
	{
		answer = false;
	}
	//숫자로만 구성되있는지 체크
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] - '0' > 9)
		{
			answer = false;
			break;
		}
	}
	return answer;
}
