// 9094. 수학적 호기심
// 2021.10.28
// 브루트 포스
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int ans;
    int dividend;
    int divisor;
    while (t-- > 0)
    {
        ans = 0;
        int n, m;
        cin >> n >> m;

        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                dividend = i * i + j * j + m;
                divisor = i * j;
                if (dividend % divisor == 0)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
