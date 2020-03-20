// 4706. 쌍둥이 역설
// 2019.09.05
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	while (1)
	{
		double ta, tb;
		cin >> ta >> tb;
		if (ta == 0 && tb == 0)
		{
			break;
		}
		// 문제에 써있는 공식 적용
		printf("%.3lf\n", sqrt(ta*ta - tb * tb) / ta);
	}
	return 0;
}
