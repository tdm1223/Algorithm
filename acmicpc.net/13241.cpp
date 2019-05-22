// 13241. 최소공배수
// 2019.05.22
// 수학
#include<iostream>

using namespace std;

//최대 공약수를 구하는 함수
long long Gcd(long long n, long long k)
{
	if (k == 0)
	{
		return n;
	}
	Gcd(k, n%k);
}

int main()
{
	long long A, B;
	cin >> A >> B;
	long long C = Gcd(A, B);
	cout << C * (A / C) * (B / C) << endl;
	return 0;
}
