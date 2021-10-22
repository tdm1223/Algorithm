// 9184. 신나는 함수 실행
// 2021.10.22
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int a, b, c;
int d[21][21][21];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    else if (a > 20 || b > 20 || c > 20)
    {
        return w(20, 20, 20);
    }
    else if (a < b && c < c)
    {
        if (d[a][b][c] != 0)
        {
            return d[a][b][c];
        }
        else
        {
            d[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
            return d[a][b][c];
        }
    }
    else
    {
        if (d[a][b][c] != 0)
        {
            return d[a][b][c];
        }
        else
        {
            d[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
            return d[a][b][c];
        }
    }
}

int main()
{
    while (1)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
    }
    return 0;
}
