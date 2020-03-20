// 1188. 음식 평론가
// 2019.05.14
#include<iostream>

using namespace std;

// 재귀로 최대공약수 구하기
int Gcd(int a, int b)
{
	if (a%b == 0)
	{
		return b;
	}
	return Gcd(b, a%b);
}

int main()
{
	int n, m;
	cin >> n >> m;
	//평론가의 수에서 소시지 수와 평론가 수의 최대공약수를 뺀다.
	cout << m - Gcd(n, m) << endl;
	return 0;
}
