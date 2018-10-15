// 2941. 크로아티아 알파벳
// 2018.10.15
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int count = 0;

	//문제에서 모든 크로아티아 알파벳에 대해 체크를 한다.
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=' || s[i + 1] == '-')
			{
				i++;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == '-')
			{
				i++;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				i += 2;
			}

		}
		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
			{
				i++;
			}

		}
		else if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				i++;
			}

		}
		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
			{
				i++;
			}
		}
		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				i++;
			}
		}
		count++;
	}

	cout << count << endl;
	return 0;
}
