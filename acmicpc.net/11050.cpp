// 11050. 이항 계수 1
// 2018.10.26
#include <iostream>

using namespace std;

int Factorial(int num)
{
	if (num == 1 || num == 0)
	{
		return 1;
	}
	else
	{
		return Factorial(num - 1) * num;
	}
}

int main(void)
{
	int n, k;
	cin >> n >> k;
	cout << Factorial(n) / (Factorial(k) * Factorial(n - k)) << endl;
	return 0;
}
