// 2740. 행렬 곱셈
// 2020.05.09
// 구현, 수학
#include<iostream>

using namespace std;

int a[101][101];
int b[101][101];
int c[101][101];

int main()
{
    int n, m, n2, m2;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> n2 >> m2;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m2; y++)
        {
            for (int i = 0; i < m; i++)
            {
                c[x][y] += a[x][i] * b[i][y];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
