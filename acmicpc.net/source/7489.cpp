// 7489. 팩토리얼
// 2021.09.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> t;

    int ans = 1;
    while (t--)
    {
        cin >> n;
        ans = 1;

        for (int i = 1; i <= n; i++)
        {
            ans *= i;
            ans %= 100000;
            while (ans % 10 == 0)
            {
                ans /= 10;
            }
        }
        cout << ans % 10 << endl;
    }
    return 0;
}
