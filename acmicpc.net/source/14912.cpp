// 14912. 숫자 빈도수
// 2021.10.11
// 브루트포스
#include<iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        while (k > 0)
        {
            if (k % 10 == d)
            {
                ans++;
            }
            k /= 10;
        }
    }

    cout << ans << endl;
    return 0;
}
