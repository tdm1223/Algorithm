// 11721. 열 개씩 끊어 출력하기
// 2018.12.20
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	cout << s[0];
	for (int i = 1; i<s.size(); i++)
	{
		cout << s[i];
		// 10글자씩 끊기
		if (i % 10 == 9)
		{
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}
