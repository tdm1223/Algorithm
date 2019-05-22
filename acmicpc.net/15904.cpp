// 15904. UCPC는 무엇의 약자일까?
// 2019.05.22
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	char ucpc[4] = { 'U','C','P','C' };
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		// U, C, P, C가 있는지 확인
		if (s[i] == ucpc[cnt])
		{
			cnt++;
			if (cnt == 4)
			{
				break;
			}
		}
	}
	if (cnt == 4)
	{
		cout << "I love UCPC" << endl;
	}
	else
	{
		cout << "I hate UCPC" << endl;
	}
	return 0;
}
