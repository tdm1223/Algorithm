// 5215. 햄버거 다이어트
// 2019.06.30
#include<iostream>
#include<algorithm>

using namespace std;

int cal[21];
int taste[21];
int d[21][10002]; // d[i][j] : i번째 까지 햄버거를 선택하고 칼로리가 j일때 점수의 최댓값
int main()
{
	int t;
	cin >> t;
	for (int z = 1; z <= t; z++)
	{
		int n, l;
		cin >> n >> l;
		// 초기화
		for (int i = 0; i < 21; i++)
		{
			fill(d[i], d[i] + 10002, 0);
		}
		fill(cal, cal + 21, 0);
		fill(taste, taste + 21, 0);
		// 입력
		for (int i = 1; i <= n; i++)
		{
			cin >> taste[i] >> cal[i];
		}
		// 0개를 선택하면 점수는 0점
		for (int i = 0; i <= l; i++)
		{
			d[0][i] = 0;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j <= l; j++)
			{
				// 현재 선택한 음식이 칼로리를 초과하면 이전값을 가져감
				if (cal[i] > j)
				{
					d[i][j] = d[i - 1][j];
				}
				// 초과하지 않는다면 이전값과 비교하여 점수 갱신
				else
				{
					d[i][j] = max(d[i - 1][j], d[i - 1][j - cal[i]] + taste[i]);
				}
			}
		}
		cout << "#" << z << " " << d[n][l] << endl;
	}
	return 0;
}
