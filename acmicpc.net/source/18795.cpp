// 18795. 이동하기 3
// 2021.06.27
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long ans = 0;
    int k;
    // 최소로 주울라면 가로,세로의 각 위치를 한번씩 지나야하므로 모든 값을 더한것과 같다.
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        ans += k;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        ans += k;
    }
    cout << ans << endl;
    return 0;
}
