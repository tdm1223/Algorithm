// 9657. 돌 게임 3
// 2021.11.28
// 게임 이론
#include<iostream>

using namespace std;

int d[1001];
int main()
{
    int n;
    cin >> n;

    d[1] = 1;
    d[2] = 0;
    d[3] = 1;
    d[4] = 1;

    for (int i = 5; i <= n; i++)
    {
        // 1개, 3개, 4개 전의 수가 상근이가 이기는 경우면 상근이가 지는 경우임
        // 바로 다음에 1, 3, 4개만큼 창영이가 돌을 놓을 수 있기 때문이다.
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
