#include <iostream>
#include<math.h>
using namespace std;

int d[1001];
int main()
{
	int n;
	cin >> n;
	//d[n] : 2xn 크기의 직사각형을 1x2, 2x1타일로 채우는 방법의 수를 10007로 나눈 나머지
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 10007;
	}
	cout << d[n] << endl;
	return 0;
}