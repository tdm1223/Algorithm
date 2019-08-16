// 16931. 겉넓이 구하기
// 2019.08.16
// 구현
#include<iostream>
#include<cmath>

using namespace std;

int map[102][102];
int main()
{
	int n, m;
	int sum = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			int right = map[i][j] - map[i][j + 1];
			int down = map[i][j] - map[i + 1][j];

			sum += abs(right);
			sum += abs(down);
		}
	}
	cout << sum + 2 * n * m << endl;
	return 0;
}
