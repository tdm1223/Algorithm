// 16237. 이삿짐센터
// 2021.09.26
// 수학
#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int ans = 0;
    ans += e;

    while (d > 0)
    {
        d--;
        if (a > 0)
        {
            a--;
        }
        ans++;
    }

    while (c > 0)
    {
        c--;
        // 3KG 1개 2KG 1개
        if (b > 0)
        {
            b--;
        }
        // 3KG 1개 1KG 2개
        else if (a > 0)
        {
            a -= 2;
        }
        ans++;
    }

    while (b > 0)
    {
        b--;
        // 2KG 2개 1KG 1개
        if (b >= 1)
        {
            b--;
            a--;
        }
        // 2KG 1개 1KG 3개
        else if (a > 0)
        {
            a -= 3;
        }
        ans++;
    }

    while (a > 0)
    {
        a -= 5;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
