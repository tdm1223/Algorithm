// 2588. 곱셈
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int c = a * b;
	while (b > 0)
	{
		int tmp = b % 10; //b의 자릿수
		cout << a * tmp << endl;
		b /= 10;
	}
	cout << c << endl;
	return 0;
}
