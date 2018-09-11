//1032. 명령 프롬프트
#include <iostream>
#include <string>
using namespace std;

char s[51];
char c[51];

int main()
{
	int n;
	cin >> n;

	n--;
	cin >> s;

	while (n--)
	{
		cin >> c;

		for (int i = 0; i < 50; i++)
		{
			if (s[i] == NULL) break;
			else
			{
				if (s[i] != c[i])
					s[i] = '?';
			}
		}
	}

	cout << s << endl;

	return 0;
}
