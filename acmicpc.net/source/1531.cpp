// 1531. 투명
// 2022.03.19
// 시뮬레이션
#include<iostream>

using namespace std;

int drawing[101][101];
int main()
{
    int n, m;
    cin >> n >> m;

    int x1, y1, x2, y2;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++)
        {
            for (int y = y1; y <= y2; y++)
            {
                drawing[x][y]++;
            }
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            if (drawing[i][j] > m)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
