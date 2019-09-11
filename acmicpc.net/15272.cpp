// 15272. Hissing Microphone
// 2019.09.11
// 문자열 처리, 영어 문제
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	bool flag = false;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] == 's' && s[i + 1] == 's')
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << "hiss" << endl;
	}
	else
	{
		cout << "no hiss" << endl;
	}
	return 0;
}
