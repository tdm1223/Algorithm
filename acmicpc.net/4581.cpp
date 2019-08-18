// 4581. Voting
// 2019.08.18
// 문자열 처리, 영어 문제
#include<iostream>
#include<string>

using namespace std;

int main()
{
	while (1)
	{
		string s;
		cin >> s;
		if (s == "#")
		{
			break;
		}
		int y = 0; // yes 개수
		int n = 0; // no 개수
		int a = 0; // absent 개수
		int size = s.size();
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'Y')
			{
				y++;
			}
			else if (s[i] == 'N')
			{
				n++;
			}
			else if (s[i] == 'A')
			{
				a++;
			}
		}

		if (size % 2 == 1)
		{
			size++;
		}

		if (a >= size / 2)
		{
			cout << "need quorum\n";
		}
		else if (y == n)
		{
			cout << "tie\n";
		}
		else if (y > n)
		{
			cout << "yes\n";
		}
		else if (y < n)
		{
			cout << "no\n";
		}
	}
	return 0;
}
