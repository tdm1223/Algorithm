// 14470. 전자레인지
// 2021.02.24
// 구현
#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int ans = 0;
    if (a < 0)
    {
        ans += a * -1 * c;
        ans += d;
        ans += b * e;
    }
    else if (a > 0)
    {
        ans = (b - a) * e;
    }
    else
    {
        ans += d;
        ans += b * e;
    }
    cout << ans << endl;
    return 0;
}
