// 16505. 별
// 2021.11.14
// 별 찍기
#include<iostream>
#include<cmath>

using namespace std;

char board[2001][2001];

void go(int n, int x, int y)
{
    if (n == 1)
    {
        board[x][y] = '*';
        return;
    }

    go(n / 2, x, y);
    go(n / 2, x + n / 2, y);
    go(n / 2, x, y + n / 2);
}

int main()
{
    int n;
    cin >> n;
    n = pow(2, n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            board[i][j] = ' ';
        }
    }

    go(n, 0, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}
