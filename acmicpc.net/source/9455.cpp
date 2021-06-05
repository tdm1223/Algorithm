// 9455. 박스
// 2021.06.06
// 구현
#include<iostream>
#include<queue>

using namespace std;

int map[101][101];
queue<int> q;
int main()
{
    int ans = 0;
    int cnt = 0;
    int t;
    int n, m, k;
    cin >> t;

    while (t-- > 0)
    {
        ans = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> map[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (map[j][i] == 1)
                {
                    q.push(n - j - 1);
                }
            }

            cnt = 0;
            while (!q.empty())
            {
                k = q.front();
                q.pop();
                if (cnt != k)
                {
                    ans += k - cnt;
                }
                cnt++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
