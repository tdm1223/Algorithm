// 1500. 최대 곱
// 2020.04.08
// 수학
#include<iostream>

using namespace std;

int main()
{
    long long s, k;
    cin >> s >> k;

    long long a = s / k; // 몫
    long long b = s % k; // 나머지

    long long ans = 1;
    // 나머지 개수만큼 (몫+1)을 곱하고 남은건 몫만 곱한다.
    while (k > 0)
    {
        k--;
        if (b > 0)
        {
            ans *= (a + 1);
            b--;
        }
        else
        {
            ans *= a;
        }
    }
    scout << ans << endl;
    return 0;
}
