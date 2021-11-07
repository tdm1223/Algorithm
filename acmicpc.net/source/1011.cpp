// 1011. Fly me to the Alpha Centauri
// 2021.11.08
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t = 0;
    int x, y, d, l = 0;
    int ans = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        l = y - x;

        // 제곱근일 경우
        d = sqrt(l);
        if (pow(d, 2) == l)
        {
            ans = 2 * d - 1;
        }
        else
        {
            ans = 2 * d;
        }

        // 중간 값
        if (l > d * (d + 1))
        {
            ans += 1;
        }

        cout << ans << endl;
    }

    return 0;
}
