// 1495. 기타리스트
// 2018.10.17
#include <iostream>

using namespace std;

int v[101]; // 볼륨 리스트
bool d[101][1001]; // d[i][j] : i번째 곡을 j로 연주할수 있으면 1 없다면 0
int main()
{
	//n : 곡의 개수 , s : 시작 볼륨 , m : 볼륨의 최대
	int n, s, m;

	cin >> n >> s >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}

	d[0][s] = true;
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (d[i][j] == false) //지금 곡을 j로 연주할수 없다면 패스
			{
				continue;
			}
			if (j - v[i + 1] >= 0)
			{
				d[i + 1][j - v[i + 1]] = true; //다음곡은 j-v[i+1]의 볼륨으로 연주 가능
			}
			if (j + v[i + 1] <= m)
			{
				d[i + 1][j + v[i + 1]] = true; //다음곡은 j+v[i+1]의 볼륨으로 연주 가능
			}
		}
	}
	int ans = -1;
	for (int i = 0; i <= m; i++)
	{
		if (d[n][i])//마지막곡을 볼륨 i로 연주할수 있는지 없는지 확인
		{
			ans = i;
		}
	}

	cout << ans << endl;
	return 0;
}
