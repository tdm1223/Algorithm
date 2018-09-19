// 1076. 저항
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j;
	long long sum;
	string a, b, c;
	string s[] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };

	cin >> a >> b >> c;

	for (i = 0; i < 10; i++)
	{
		if (a == s[i])
		{
			sum += i * 10;
		}
		if (b == s[i])
		{
			sum += i;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (c == s[i])
		{
			for (j = 0; j < i; j++)
			{
				sum *= 10;
			}
		}
	}

	cout << sum << endl;

	return 0;
}
