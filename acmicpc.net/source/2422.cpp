// 2422. 한윤정이 이탈리아에 가서 아이스크림을 사먹는데
// 2021.11.06
// 브루트 포스
#include<iostream>

using namespace std;

int n, m;
bool visit[205][205];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int p, q;
        cin >> p >> q;
        visit[p][q] = 1;
        visit[q][p] = 1;
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (visit[i][j])
            {
                continue;
            }
            for (int k = j + 1; k <= n; ++k)
            {
                if (visit[j][k] || visit[k][i])
                {
                    continue;
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
