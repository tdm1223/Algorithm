// 1051. 숫자 정사각형
// 2018.10.24
#include <iostream>

using namespace std;

int a[51][51];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; (k + i < n) && (k + j < m); k++)
			{
				int tmp = a[i][j];
				if (a[i + k][j] == tmp && a[i][j + k] == tmp && a[i + k][j + k] == tmp)
				{
					if (max < k)
					{
						max = k;
					}
				}
			}
		}
	}

	cout << (max+1) * (max+1) << endl;
	return 0;
}
