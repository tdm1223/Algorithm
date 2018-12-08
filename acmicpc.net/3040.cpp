// 3040. 백설 공주와 일곱 난쟁이
// 2018.12.08
#include<iostream>

using namespace std;

int main()
{
	int a[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	// 두개를 뺏을때 100이 되도록 모든 경우에 대해 계산
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - a[i] - a[j] == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						cout << a[k] << endl;
					}
				}
			}
		}
	}
	return 0;
}
