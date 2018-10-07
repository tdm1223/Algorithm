//시저 암호
#include <string>

using namespace std;

string solution(string s, int n)
{
	for (int i = 0; i<s.size(); i++)
	{
		if (s[i] == ' ')
		{
			continue;
		}
		//대소문자 판별
		char b = isupper(s[i]) ? 'A' : 'a';
		s[i] = b + (s[i] - b + n) % 26;
	}

	return s;
}
