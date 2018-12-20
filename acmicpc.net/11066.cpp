// 11066. 파일 합치기
// 2018.12.20
#include<algorithm>
#include<iostream>

using namespace std;

int sum[501];
int d[501][501]; // d[i][j] : i번째 장부터 j번째 장까지 합치는데 드는 비용의 최솟값
int a[501];
int main()
{
	int t, k;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> k;
		for (int i = 1; i <= k; i++)
		{
			cin >> a[i];
			sum[i] = sum[i - 1] + a[i];
		}

		for (int i = 1; i < k; i++)
		{
			for (int j = 1; j + i <= k; ++j)
			{
				int l = j + i;
				d[j][l] = 2147483637;

				for (int mid = j; mid < l; ++mid)
				{
					d[j][l] = min(d[j][l], d[j][mid] + d[mid + 1][l] + sum[l] - sum[j - 1]);
				}
			}
		}
		cout << d[1][k] << endl;
	}

	return 0;
}
