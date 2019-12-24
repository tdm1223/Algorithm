// 18229. 내가 살게, 아냐 내가 살게
// 2019.12.24
// 배열
#include<iostream>

using namespace std;

int cost[101][101];
int accumulate[101][101];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> cost[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        accumulate[i][0] = cost[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            accumulate[i][j] = accumulate[i][j - 1] + cost[i][j];
        }
    }

    bool flag = true;
    int ansIdx = 0;
    int ansCnt = 0;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        cnt++;
        if (!flag)
        {
            break;
        }
        for (int j = 0; j < n; j++)
        {
            if (accumulate[j][i] >= k)
            {
                flag = false;
                ansIdx = j+1;
                ansCnt = cnt;
                break;
            }
        }
    }
    cout << ansIdx << " " << ansCnt << endl;
    return 0;
}
