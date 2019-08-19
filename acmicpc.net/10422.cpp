// 10422. 괄호
// 2019.08.19
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

long long d[5001]; // d[i] : 길이가 i인 올바른 괄호 문자열의 개수
int main()
{
	int t;
	cin >> t;
	d[0] = 1;
	// d[i] : sigma(d[j-2] * d[i-j]), i = 2, 4, 6, ..., N
	for (int i = 2; i <= 5000; i += 2)
	{
		for (int j = 2; j <= i; j += 2)
		{
			d[i] += d[j - 2] * d[i - j];
			d[i] %= 1000000007;
		}
	}
	while (t-- > 0)
	{
		int n;
		cin >> n;
		cout << d[n] << "\n";
	}
	return 0;
}
