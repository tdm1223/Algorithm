// 21312. 홀짝 칵테일
// 2021.09.07
// 수학
#include<iostream>

using namespace std;

int main()
{
    int ans = 1;
    int ans2 = 1;

    int cnt = 0;
    int k;
    for (int i = 0; i < 3; i++)
    {
        cin >> k;
        if (k % 2 == 1)
        {
            ans *= k;
        }
        else
        {
            cnt++;
            ans2 *= k;
        }
    }

    if (cnt == 3)
    {
        cout << ans2 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}
