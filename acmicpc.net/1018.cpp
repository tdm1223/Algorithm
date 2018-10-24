// 1018. 체스판 다시 칠하기
// 2018.10.24
#include<iostream>
#include<algorithm>

using namespace std;

char a[51][51];
char mask1[8][8]; //왼쪽 위 코너가 검은색인 체스판
char mask2[8][8]; //왼쪽 위 코너가 흰색인 체스판
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	//2가지 체스판 만들기
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				mask1[i][j] = 'B';
				mask2[i][j] = 'W';
			}
			else
			{
				mask1[i][j] = 'W';
				mask2[i][j] = 'B';
			}
		}
	}

	int ans = 64;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int count1 = 0;
			int count2 = 0;
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if (a[i + k][j + l] != mask1[k][l])
					{
						count1++;
					}
					if (a[i + k][j + l] != mask2[k][l])
					{
						count2++;
					}
				}
			}
			int count = min(count1, count2);
			if (ans > count)
			{
				ans = count;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
