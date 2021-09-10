// 2553. 마지막 팩토리얼 수
// 2021.09.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= 10000000;
        while (ans % 10 == 0)
        {
            ans /= 10;
        }
    }
    cout << ans % 10 << endl;
    return 0;
}
