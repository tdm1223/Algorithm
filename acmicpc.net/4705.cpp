// 4705. Roaming Romans
// 2019.09.05
// 수학, 영어 문제
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double percent = (float)5280 / 4854; // 문제에서 주어진 대로 계산하여 비율을 구함
	while (1)
	{
		double x;
		cin >> x;

		if (x == 0.0)
		{
			break;
		}
		double tmp = x * percent;
		printf("%.2f English miles equals ",x);
		x *= percent;
		int y = (((x * 10000) + 5) / 10);
		printf("%.2f Roman miles or %d paces.\n", x,y);

	}
	return 0;
}
