// 2745. 진법 변환
// 2019.09.10
// 진법
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int k;
	cin >> s >> k;

	int ans = 0;
	int cnt = 1;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] - '0' > 9)
		{
			ans += (s[i] - 'A' + 10)*cnt;
		}
		else
		{
			ans += (s[i] - '0')*cnt;
		}
		cnt *= k;
	}
	cout << ans << endl;
	return 0;
}
