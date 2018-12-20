// 11050. 이항 계수 1
// 2018.12.20
#include<iostream>

using namespace std;

// 팩토리얼을 재귀로 구함
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
	// 이항계수 공식 사용하여 출력
	cout << Factorial(n) / (Factorial(k) * Factorial(n - k)) << endl;
	return 0;
}
