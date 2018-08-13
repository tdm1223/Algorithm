#include <iostream>
#include <string>

using namespace std;

int num[10];
int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		int cnt = s[i] - '0';
		num[cnt]++;
	}

	num[9] += num[6];
	num[6] /= 2;
	if (num[9] % 2 == 0)
	{
		num[9] /= 2;
	}
	else
	{
		num[9]++;
		num[9] /= 2;
	}

	int ans = 0;
	for (int i = 0; i < 10; i++)
	{
		if (ans < num[i]) ans = num[i];
	}
	cout << ans << endl;
	return 0;
}