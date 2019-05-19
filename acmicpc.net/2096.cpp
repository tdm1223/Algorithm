// 2096. 내려가기
// 2019.05.19
// 다이나믹 프로그래밍
#include<cstdio>
#include<algorithm>

using namespace std;

int a[3];
int dMin[100001][3]; // d[i][j] : i행 j열에서의 최댓값
int dMax[100001][3]; // d[i][j] : i행 j열에서의 최솟값

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d %d", &a[0], &a[1], &a[2]);

		// 각각의 경우에 대해 최댓값을 구함
		dMax[i][0] = max(dMax[i - 1][0], dMax[i - 1][1]) + a[0];
		dMax[i][1] = max(max(dMax[i - 1][0], dMax[i - 1][1]), dMax[i - 1][2]) + a[1];
		dMax[i][2] = max(dMax[i - 1][1], dMax[i - 1][2]) + a[2];

		// 각각의 경우에 대해 최솟값을 구함
		dMin[i][0] = min(dMin[i - 1][0], dMin[i - 1][1]) + a[0];
		dMin[i][1] = min(min(dMin[i - 1][0], dMin[i - 1][1]), dMin[i - 1][2]) + a[1];
		dMin[i][2] = min(dMin[i - 1][1], dMin[i - 1][2]) + a[2];

	}

	// 위에서 구한 3가지 경우에 대해 최대 최소 값을 구함
	printf("%d %d\n", max(max(dMax[n][0], dMax[n][1]), dMax[n][2]), min(min(dMin[n][0], dMin[n][1]), dMin[n][2]));
	return 0;
}
