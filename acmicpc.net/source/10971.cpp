// 10971. 외판원 순회 2
// 2021.11.06
// 브루트 포스
#include<iostream>
#include<algorithm>

using namespace std;

int map[11][11];
int visit[11];
int n;
int ans = 987654321;
int start;

void go(int start, int cnt, int val)
{
    if (cnt == n - 1)
    {
        // 시작점으로 되돌아 가는 경우가 있는지 체크
        if (map[start][::start] != 0)
        {
            ans = min(ans, val + map[start][::start]);
        }
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (map[start][i] == 0 || visit[i] == 1)
        {
            continue;
        }

        visit[i] = 1;
        go(i, cnt + 1, val + map[start][i]);
        visit[i] = 0;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        visit[i] = 1;
        start = i;
        go(i, 0, 0);
        visit[i] = 0;
    }

    cout << ans << endl;
    return 0;
}
