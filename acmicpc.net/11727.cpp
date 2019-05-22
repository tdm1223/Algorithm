// 11727. 2×n 타일링 2
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[1001]; // d[i] : 2xi크기의 직사각형을 채우는 방법의 수를 10007로 나눈 나머지
int main()
{
	int n;
	cin >> n;
	d[1] = 1;
	d[2] = 3;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + 2 * d[i - 2]; // 2x2정사각형도 있으므로 2*d[i-2]
		d[i] %= 10007;
	}
	cout << d[n] << endl;
	return 0;
}
