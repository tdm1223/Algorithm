// 14490. 백대열
// 2018.11.18
#include<iostream>
#include<string>

using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a%b);
	}
}

int main()
{
	string s;
	cin >> s;
	int k;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ':')
		{
			k = i;
		}
	}

	int a = stoi(s.substr(0, k));
	int b = stoi(s.substr(k + 1, s.size()));
	if (b > a)
	{
		int tmp = b;
		b = a;
		a = tmp;
		cout << b / GCD(a, b) << ":" << a / GCD(a, b) << endl;
	}
	else
	{
		cout << a / GCD(a, b) << ":" << b / GCD(a, b) << endl;
	}
	return 0;
}
