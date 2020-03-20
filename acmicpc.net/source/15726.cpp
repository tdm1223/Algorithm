// 15726. 이칙연산
// 2019.10.21
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int x = (double)a * b / c;
	int y = (double)a / b * c;
	cout << max(x, y) << endl;
	return 0;
}
