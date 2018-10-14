// 1076. 저항
// 2018.10.14
#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long ans = 0;
	string a, b, c;
	string s[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };

	cin >> a >> b >> c;

	//처음 두개로 두자릿수를 만듦
	for (int i = 0; i < 10; i++)
	{
		if (a == s[i])
		{
			ans += i * 10;
		}
		if (b == s[i])
		{
			ans += i;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (c == s[i])
		{
			for (int j = 0; j < i; j++)
			{
				ans *= 10;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
