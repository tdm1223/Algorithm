// 10163. 색종이
// 2019.10.29
// 구현
#include<iostream>

using namespace std;

int map[205][205];
int sum[101];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x, y, w, h;
		cin >> x >> y >> w >> h;
		for (int j = x; j < x + w; j++)
		{
			for (int k = y; k < y + h; k++)
			{
				map[j][k] = i;
			}
		}
	}

	for (int i = 0; i <= 204; i++)
	{
		for (int j = 0; j <= 204; j++)
		{
			sum[map[i][j]]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << sum[i] << endl;
	}
	return 0;
}
