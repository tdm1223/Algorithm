// 23972. 악마의 제안
// 2022.02.19
// 수학
#include<iostream>

using namespace std;

int main()
{
    long long k, n;
    cin >> k >> n;

    if (n == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        // (ans - k) * n == ans
        long long ans = (n * k) / (n - 1);
        if ((k * n) % (n - 1) != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
