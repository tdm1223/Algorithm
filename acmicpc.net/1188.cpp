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
	cout << m - Gcd(n, m) << endl;

	return 0;

}
