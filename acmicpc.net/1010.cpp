#include <iostream>

using namespace std;

int d[1000][1000]; //d[i][j] : 왼쪽에 i개 오른쪽에 j개 있을때 다리를 지을 수 있는 경우의 수

int main()
{
	int t;
	int n, m;

	for (int i = 0; i < 31; i++)
	{
		d[1][i] = i; //왼쪽이 1개면 경우의 수는 j개
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

}


