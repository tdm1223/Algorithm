// 2775. 부녀회장이 될테야
// 2019.05.20
// 구현
#include<iostream>

using namespace std;

int d[15][15]; // d[i][j] : i층 j호에 거주하는 사람의 수
int main()
{
	for (int i = 1; i <= 14; i++)
	{
		d[0][i] = i; // 0층의  i호에는 i명
		d[i][1] = 1; //각 층의 1호는 1명
	}
	for (int i = 1; i <= 14; i++)
	{
		for (int j = 1; j <= 14; j++)
		{
			d[i][j] = d[i - 1][j] + d[i][j - 1];
		}
	}

	int t, n, k;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> n >> k;
		cout << d[n][k] << endl;
	}
	return 0;
}
