// 14916. 거스름돈
// 2021.06.22
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[100001];
int main()
{
    int n;
    cin >> n;

    d[0] = 0;
    d[1] = 0;
    d[2] = 1;
    d[3] = 0;
    d[4] = 2;
    for (int i = 5; i <= n; i++)
    {
        if (d[i - 2] == 0)
        {
            d[i] = d[i - 5] + 1;
        }
        else if (d[i - 5] == 0)
        {
            d[i] = d[i - 2] + 1;
        }
        else
        {
            d[i] = min(d[i - 2], d[i - 5]) + 1;
        }
    }

    if (d[n] == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << d[n] << endl;
    }
    return 0;
}
