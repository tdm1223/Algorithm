// 5054. 주차의 신
// 2021.10.18
// 수학
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    int ans = 0;
    vector <int> v;
    while (t-- > 0)
    {
        cin >> n;
        ans = 0;
        v.clear();
        v.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // 정렬 후 차례대로 방문
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            ans += v[i] - v[i - 1];
        }

        // 왕복해야하므로 2를 곱함
        cout << ans * 2 << endl;
    }
    return 0;
}
