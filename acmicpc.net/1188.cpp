// 1188.은식 평론가
#include <iostream>

using namespace std;

int Gcd(int a, int b)
{
	if (a%b == 0)
		return b;
	return Gcd(b, a%b);

}

int main(void)
{
	int n, m;
	cin >> n >> m;
	//평론가의 수에서 소시지 수와 평론가 수의 최대공약수를 뺀다.
	cout << m - Gcd(n, m) << endl;

	return 0;

}
