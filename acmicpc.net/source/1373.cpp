// 1373. 2진수 8진수
// 2019.09.21
// 진법
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	if (s.size() % 3 ==1)
	{
		s = "00" + s;
	}
	else if (s.size() % 3 == 2)
	{
		s = "0" + s;
	}
	for (int i = 0; i < s.size(); i += 3)
	{
		string tmp = s.substr(i, 3);
		int x = 0;
		int cnt = 1;
		for (int j = 2; j >= 0; j--)
		{
			x += (tmp[j] - '0')*cnt;
			cnt *= 2;
		}
		cout << x;
	}
	return 0;
}
