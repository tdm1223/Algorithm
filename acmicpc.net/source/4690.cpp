// 4690. 완전 세제곱
// 2019.07.16
// 입문용
#include<iostream>

using namespace std;

int main()
{
	for (int i = 2; i <= 100; i++)
	{
		for (int j = 2; j <= 100; j++)
		{
			for (int k = j; k <= 100; k++)
			{
				for (int l = k; l <= 100; l++)
				{
					if ((i*i*i) == (j * j * j + k * k * k + l * l * l))
					{
						cout << "Cube = " << i << ", Triple = (" << j << "," << k << "," << l << ")" << endl;
					}
				}
			}
		}
	}
	return 0;
}
