// 14490. 백대열
// 2019.05.22
// 수학
#include<iostream>
#include<string>

using namespace std;
// 재귀로 최대공약수를 구하는 함수
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
	// 두 수의 최대 공약수를 이용하여 나눠줌
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
