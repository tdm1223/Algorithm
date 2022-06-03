// 14625. 냉동식품
// 2022.06.03
// 구현
#include<iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2, n;
    cin >> h1 >> m1 >> h2 >> m2 >> n;

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;
    int cur = start;
    int ans = 0;
    while (1)
    {
        int h = cur / 60;
        int m = cur % 60;

        if (h / 10 == n || h % 10 == n || m / 10 == n || m % 10 == n)
        {
            ans++;
        }

        if (cur == end)
        {
            break;
        }

        cur++;
    }

    cout << ans << endl;
    return 0;
}
