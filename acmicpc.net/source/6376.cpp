// 6376. e 계산
// 2019.07.14
// 입문용
#include<iostream>

using namespace std;

int fac[9];
int main()
{
	double e = 0;
	int fact = 1;
	cout << "n e" << endl;
	cout << "- -----------" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i > 0)
		{
			fact *= i;
		}
		e += (double)1 / fact;
		// 나누어 떨어질땐 그냥 출력
		if (i < 3)
		{
			cout << i << " " << e << endl;
		}
		else
		{
			cout.precision(9);
			cout << i << fixed << " " << e << endl;
		}
	}
	return 0;
}
