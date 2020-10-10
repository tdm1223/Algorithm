// 2476. 주사위 게임
// 2020.10.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int score;
    while (n-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        score = 0;
        if (a == b && b == c && c == a)
        {
            score = 10000 + a * 1000;
        }
        else if (a == b)
        {
            score = 1000 + a * 100;
        }
        else if (b == c)
        {
            score = 1000 + b * 100;
        }
        else if (c == a)
        {
            score = 1000 + c * 100;
        }
        else
        {
            score = max(max(a, b), c) * 100;
        }
        ans = max(ans, score);
    }
    cout << ans << endl;
    return 0;
}
