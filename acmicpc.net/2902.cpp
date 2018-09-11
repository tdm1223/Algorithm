// 2902. KMP는 왜 KMP일까?
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	string ans;
	cin >> s;

	ans += s[0];
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '-')
		{
			ans += s[i + 1];
		}
	}

	cout << ans << endl;
}
