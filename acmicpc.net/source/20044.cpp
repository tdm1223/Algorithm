// 20044. Project Teams
// 2021.10.26
// 그리디 알고리즘
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int ans = 987654321;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = v[i] + v[v.size() - i - 1];
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
