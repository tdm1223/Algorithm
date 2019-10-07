// 2896. 무알콜 칵테일
// 2019.10.08
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	double a, b, c, i, j, k;
	cin >> a >> b >> c >> i >> j >> k;

	double m = min(c / k, min(a / i, b / j)); // 비율로 나눈것의 몫이 가장 작은 값을 저장
	printf("%.6f %.6f %.6f", a - m * i, b - m * j, c - m * k);
	return 0;
}
