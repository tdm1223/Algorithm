// 2225. 합분해
// 2020.07.29
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[201][201]; // d[i][j] : 정수 i개를 더해서 그 합이 j가 되는 경우의 수

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i <= n; i++)
    {
        d[1][i] = 1;
    }

    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int l = 0; l <= j; l++)
            {
                d[i][j] += d[i - 1][j - l];
                d[i][j] %= 1000000000;
            }
        }
    }
    cout << d[k][n] << endl;
    return 0;
}
