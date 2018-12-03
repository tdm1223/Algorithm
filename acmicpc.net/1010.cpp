// 1010. 다리 놓기
// 분류 : 다이나믹 프로그래밍
// 2018.12.03
#include<iostream>

using namespace std;

int d[31][31]; // d[n][m] : 왼쪽에 n 오른쪽에 m개의 사이트가 있을때 다리를 지을 수 있는 경우의 수
int main()
{
	int t;
	int n, m;

	for (int i = 0; i < 31; i++)
	{
		d[1][i] = i;
	}

	for (int i = 2; i < 31; i++)
	{
		for (int j = i; j < 31; j++)
		{
			for (int k = j - 1; k >= i - 1; k--)
			{
				d[i][j] += d[i - 1][k];
			}
		}
	}

	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> n >> m;
		cout << d[n][m] << endl;
	}
	return 0;
}
