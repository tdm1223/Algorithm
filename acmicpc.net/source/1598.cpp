// 1598. 꼬리를 무는 숫자 나열
// 2021.10.21
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    // 동서거리
    int x = n / 4 + (n % 4 == 0 ? 0 : 1);
    int y = m / 4 + (m % 4 == 0 ? 0 : 1);
    ans += abs(y - x);

    // 남북 거리
    x = n % 4 + (n % 4 == 0 ? 4 : 0);
    y = m % 4 + (m % 4 == 0 ? 4 : 0);
    ans += abs(x - y);
    cout << ans << endl;
    return 0;
}
