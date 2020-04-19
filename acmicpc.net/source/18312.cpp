// 18312. 시각
// 2020.04.19
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n, k;
    int ans = 0;
    cin >> n >> k;
    // 00시 00분 00초부터 N시 59분 59초까지 계산한다.
    for (int h = 0; h <= n; h++)
    {
        for (int m = 0; m < 60; m++)
        {
            for (int s = 0; s < 60; s++)
            {
                int h1 = h / 10;
                int h2 = h % 10;
                int m1 = m / 10;
                int m2 = m % 10;
                int s1 = s / 10;
                int s2 = s % 10;
                if (h1 == k || h2 == k || m1 == k || m2 == k || s1 == k || s2 == k)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
