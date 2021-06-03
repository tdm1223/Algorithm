// 1312. 소수
// 2021.06.03
// 수학
#include<iostream>

using namespace std;

int main()
{
    int a, b, n;
    int ans = 0;
    cin >> a >> b >> n;
    while (n--)
    {
        a %= b;
        a *= 10;
        ans = a / b;
    }
    cout << ans << "\n";
    return 0;
}
