// 19698. 헛간 청약
// 2020.09.11
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int ans = (w / l) * (h / l);
    if (ans > n)
    {
        ans = n;
    }
    cout << ans << endl;
    return 0;
}
