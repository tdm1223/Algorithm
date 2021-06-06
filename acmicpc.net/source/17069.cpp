// 17069. 파이프 옮기기 2
// 2021.06.07
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int map[33][33];
long long d[33][33][3];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }

    // d[i][j][k] : i,j에서 k방향인 경우의 수
    d[0][1][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // 가로 이동
            if (map[i][j + 1] == 0)
            {
                d[i][j + 1][0] += d[i][j][0] + d[i][j][2];
            }

            // 세로 이동
            if (map[i + 1][j] == 0)
            {
                d[i + 1][j][1] += d[i][j][1] + d[i][j][2];
            }

            // 대각선 이동
            // 오른쪽 칸과 아래칸도 0이어야 이동할 수 있다.
            if (map[i + 1][j] == 0 && map[i][j + 1] == 0 && map[i + 1][j + 1] == 0)
            {
                d[i + 1][j + 1][2] += d[i][j][0] + d[i][j][1] + d[i][j][2];
            }
        }
    }

    long long ans = d[n - 1][n - 1][0] + d[n - 1][n - 1][1] + d[n - 1][n - 1][2];
    cout << ans << endl;
    return 0;
}
