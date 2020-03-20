// 10987. 모음의 개수
// 2019.05.22
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		// 모음(a,e,i,o,u)의 개수를 구한다.
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			count++;
		}
	}

	cout << count << endl;
	return 0;
}
