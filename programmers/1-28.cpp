//이상한 문자 만들기
#include<string>

using namespace std;

string solution(string s)
{
	string answer = "";
	int count = 1;
	for (int i = 0; i < s.size(); i++)
	{
		//공백을 기준으로 짝/홀수 판단을 하기때문에 공백을 만나면 count 초기화
		if (s[i] == ' ')
		{
			count = 0;
		}
		else
		{
			if (count % 2 == 0)
			{
				s[i] = tolower(s[i]);
			}
			else
			{
				s[i] = toupper(s[i]);
			}
		}
		count++;
	}
	answer = s;

	return answer;
}
