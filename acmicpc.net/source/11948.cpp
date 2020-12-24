// 11948. 과목선택
// 2020.12.24
// 구현, 입문용
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = a + b + c + d;
    ans -= min(min(a, b), min(c, d));
    ans += max(e, f);
    cout << ans << endl;
    return 0;
}
