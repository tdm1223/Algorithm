// 1008. A/B
// 2018.05.14
// 사칙연산, 수학
#include<iostream>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(9); // 9자리까지 출력
	cout << a / b;
	return 0;
}
