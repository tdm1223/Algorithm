// 4796. 캠핑
// 2022.03.12
// 그리디 알고리즘
#include<iostream>

using namespace std;

int main()
{
    int l, p, v;
    int cnt = 0;
    while (1)
    {
        cnt++;
        cin >> l >> p >> v;
        if (l == 0 and p == 0 and v == 0)
        {
            break;
        }

        int ans = 0;
        ans += (v / p) * l;

        // 잔여로 쉴수 있을때는 무조건 최대로 쉰다.
        ans += v % p > l ? l : v % p;
        cout << "Case " << cnt << ": " << ans << endl;
    }
    return 0;
}
