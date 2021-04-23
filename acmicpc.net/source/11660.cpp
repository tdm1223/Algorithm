// 11660. 구간 합 구하기 5
// 2021.04.23
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int sum[1025][1025];
int map[1025][1025];
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j];
        }
    }

    // 양쪽 끝의 합을 먼저 구함
    for (int i = 1; i <= n; i++)
    {
        sum[i][1] = sum[i - 1][1] + map[i][1];
        sum[1][i] = sum[1][i - 1] + map[1][i];
    }

    // 나머지 부분합 구함
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + map[i][j];
        }
    }

    // 결과 반환
    int x1, x2, y1, y2;
    for (int i = 0; i < m; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1] << '\n';
    }

    return 0;
}
