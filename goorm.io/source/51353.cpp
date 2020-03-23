// 뱀이 지나간 자리
// 2020.03.23
#include <iostream>

using namespace std;

char map[101][101];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            map[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i+=2)
    {
        for (int j = 0; j < m; j++)
        {
            map[i][j] = '#';
        }
    }

    bool flag = true;
    for (int i = 1; i < n; i += 2)
    {
        if (flag)
        {
            map[i][m - 1] = '#';
            flag = !flag;
        }
        else
        {
            map[i][0] = '#';
            flag = !flag;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}
