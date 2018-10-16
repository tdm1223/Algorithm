// 14863. 서울에서 경산까지
// 2018.10.16
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int d[101][100001]; //d[i][j] : 도시 i까지 j이내의 시간에 이동하면서 벌 수 있는 최대 금액
int visit[101][100001];
//arr[i][0~4]:구간 i를 0:도보로 이동 걸리는 시간   1: 이때 모금액
//arr[i][0~4]:구간 i를 2:자전거로 이동 걸리는 시간 3: 이때 모금액
int arr[101][4];
int main()
{
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}
	visit[0][0] = 1;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			if (visit[i][j] == 0)
			{
				continue;
			}
			if (j + arr[i][0] <= k)
			{
				d[i + 1][j + arr[i][0]] = max(d[i + 1][j + arr[i][0]], d[i][j] + arr[i][1]);
				visit[i + 1][j + arr[i][0]] = 1;
			}
			if (j + arr[i][2] <= k)
			{
				d[i + 1][j + arr[i][2]] = max(d[i + 1][j + arr[i][2]], d[i][j] + arr[i][3]);
				visit[i + 1][j + arr[i][2]] = 1;
			}
		}
	}
	for (int i = 0; i <= k; i++)
	{
		ans = max(ans, d[n][i]);
	}
	cout << ans << endl;
	return 0;
}
