//1032. 명령 프롬프트
#include <iostream>
#include <string>
using namespace std;

string s;
string c;

int main()
{
	int n;
	cin >> n;

	n--;
	cin >> s;

	while (n--)
	{
		cin >> c;
		//맨 처음 입력을 기준으로 나머지 입력들과 비교하여 다를경우 ?로 출력
		for (int i = 0; i < c.size(); i++)
		{
			if (s[i] == NULL)
				break;
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
