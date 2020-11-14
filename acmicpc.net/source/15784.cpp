// 15784. 질투진서
// 2020.11.14
// 구현
#include<iostream>
#include<queue>

using namespace std;

int x[1001][1001];

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == a)
        {
            continue;
        }
        if (x[i][b] > x[a][b])
        {
            cout << "ANGRY" << endl;
            return 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == b)
        {
            continue;
        }
        if (x[a][i] > x[a][b])
        {
            cout << "ANGRY" << endl;
            return 0;
        }
    }

    cout << "HAPPY" << endl;
    return 0;
}
