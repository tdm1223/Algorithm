// 9658. 돌 게임 4
// 2021.11.28
// 게임 이론
#include<iostream>

using namespace std;

int d[1001];
int main()
{
    int n;
    cin >> n;

    d[1] = 0;
    d[2] = 1;
    d[3] = 0;
    d[4] = 1;

    for (int i = 5; i <= n; i++)
    {
        // 1개, 3개, 4개 전의 수가 상근이가 이기는 경우면 상근이가 지는 경우
        if (min(min(d[i - 1], d[i - 3]), d[i - 4]) == 1)
        {
            d[i] = 0;
        }
        else
        {
            d[i] = 1;
        }
    }

    if (d[n] == 1)
    {
        cout << "SK" << endl;
    }
    else
    {
        cout << "CY" << endl;
    }
    return 0;
}
