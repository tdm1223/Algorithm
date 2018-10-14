// 1890. 점프
// 2018.10.14
#include<iostream>

using namespace std;

int arr[101][101];
long long d[101][101]; // d[i][j] : i,j칸으로 규칙에 맞게 갈 수 있는 경로의 개수
int main()
{
	int n;
	cin >> n;

	d[1][1] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == 0 || (i == n && j == n))//범위를 벗어날 때
			{
				continue;
			}
			if (j + arr[i][j] <= n) //오른쪽으로 이동할 수 있는 상황이라면
			{
				d[i][j + arr[i][j]] += d[i][j]; //이동하는 곳에 현재 값을 더해준다.
			}

			if (i + arr[i][j] <= n) //아래로 이동할 수 있는 상황이라면
			{
				d[i + arr[i][j]][j] += d[i][j]; //이동하는 곳에 현재 값을 더해준다.
			}
		}
	}

	cout << d[n][n] << endl;
	return 0;
}
