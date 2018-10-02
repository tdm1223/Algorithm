// 9465. 스티커
#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[2][100001]; // d[i][j] i 라인에 대한 j열 까지 스티커 점수의 최댓값
int a[2][100001]; // a[i][j] : i,j의 스티커 값
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}

		for (int i = 0; i < n; i++)
		{
			//(현재 줄-1까지의 합), (반대 줄-1까지합 + 현재위치 값), (반대 줄 -2까지의 합 + 현재위치 값) 중 최댓값
			d[0][i] = max(max(d[0][i - 1], d[1][i - 1] + a[0][i]), d[1][i - 2] + a[0][i]);
			d[1][i] = max(max(d[1][i - 1], d[0][i - 1] + a[1][i]), d[0][i - 2] + a[1][i]);
		}

		cout << max(d[0][n - 1], d[1][n - 1]) << endl;
	}
}
