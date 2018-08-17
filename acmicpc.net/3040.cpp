#include <iostream>

using namespace std;

int main()
{
	int a[9], sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	//모두 더한다음 2개씩 빼면서 100일 경우를 찾는다.
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