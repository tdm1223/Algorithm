// 25704. 출석 이벤트
// 2022.10.03
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    int ans = 0;
    if (n >= 20)
    {
        ans = min((int)(p * 0.75), p - 2000);
    }
    else if (n >= 15)
    {
        ans = min((int)(p * 0.9), p - 2000);
    }
    else if (n >= 10)
    {
        ans = min((int)(p * 0.9), p - 500);
    }
    else if (n >= 5)
    {
        ans = p - 500;
    }
    else
    {
        ans = p;
    }

    if (ans < 0)
    {
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}
