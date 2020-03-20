// 5376. 소수를 분수로
// 2019.08.28
// 수학
#include<iostream>
#include<string>

using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}
int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		string s;
		cin >> s;
		bool flag = true;
		int point = 0;
		int start = 0;
		int end = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				flag = false;
				start = i;
			}
			if (s[i] == ')')
			{
				end = i;
			}
			if (s[i] == '.')
			{
				point = i;
			}
		}

		long long cnt = 1;
		if (flag)
		{
			long long decimal = 0;
			for (int i = point + 1; i < s.size(); i++)
			{
				decimal *= 10;
				cnt *= 10;
				decimal += (s[i] - '0');
			}
			cout << decimal / gcd(decimal, cnt) << "/" << cnt / gcd(decimal, cnt) << endl;
		}
		else
		{
			long long digit1 = 1; // 무한소수를 제외한 부분이 몇자리인지 저장
			long long finite = 0; // .부터 (나오기 전까지의 숫자를 저장
			long long digit2 = end - 3; // (start-2) + (end-start-1). 무한소수가 몇자리인지 저장
			long long infinite = 0; // 무한 소수 부분
			for (int i = 2; i < start; i++)
			{
				infinite *= 10;
				infinite += (s[i] - '0');
				finite *= 10;
				finite += (s[i] - '0');
				digit1 *= 10;
			}
			for (int i = start + 1; i < end; i++)
			{
				infinite *= 10;
				infinite += (s[i] - '0');
			}
			for (int i = 0; i < digit2; i++)
			{
				cnt *= 10;
			}
			long long a = infinite - finite;
			long long b = cnt - digit1;
			cout << a / gcd(a, b) << "/" << b / gcd(a, b) << endl;
		}
	}
	return 0;
}
