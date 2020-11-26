// 2482. 주사위 네개
// 2020.11.26
// 구현
#include <iostream>

using namespace std;

int n;
int k;
int ans;

int dice[7];
int currentMoney = 0;
void Init()
{
    for (int i = 0; i < 7; i++)
    {
        dice[i] = 0;
    }
    currentMoney = 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        Init();
        for (int i = 0; i < 4; i++)
        {
            cin >> k;
            dice[k]++;
        }

        for (int i = 1; i <= 6; i++)
        {
            if (dice[i] == 4)
            {
                currentMoney = 50000 + i * 5000;
                break;
            }
        }

        if (currentMoney == 0)
        {
            for (int i = 1; i <= 6; i++)
            {
                if (dice[i] == 3)
                {
                    currentMoney = 10000 + i * 1000;
                    break;
                }
            }
        }

        if (currentMoney == 0)
        {
            int cnt = 0;
            for (int i = 1; i <= 6; i++)
            {
                if (dice[i] == 2)
                {
                    cnt++;
                    currentMoney += i;
                }
            }
            if (cnt == 2)
            {

                currentMoney = 2000 + currentMoney * 500;
            }
            else if (cnt == 1)
            {
                currentMoney = 1000 + currentMoney * 100;
            }
        }

        if (currentMoney == 0)
        {
            for (int i = 6; i >= 1; i--)
            {
                if (dice[i])
                {
                    currentMoney = i * 100;
                    break;
                }
            }
        }

        if (ans < currentMoney)
        {
            ans = currentMoney;
        }
    }

    cout << ans << endl;
    return 0;
}
