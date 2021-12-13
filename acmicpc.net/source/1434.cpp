// 1434. 책 정리
// 2021.12.14
// 그리디 알고리즘
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int ans = 0;
    int aCnt = 0;
    int bCnt = 0;
    while (1)
    {
        if (bCnt == m)
        {
            for (int i = aCnt; i < n; i++)
            {
                ans += a[i];
            }
            break;
        }

        if (a[aCnt] - b[bCnt] >= 0)
        {
            a[aCnt] -= b[bCnt];
            bCnt++;
        }
        else
        {
            ans += a[aCnt];
            aCnt++;
        }
    }

    cout << ans << endl;
    return 0;
}
