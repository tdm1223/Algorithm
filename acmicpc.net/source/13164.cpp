// 13164. 행복 유치원
// 2020.07.04
// 그리디 알고리즘
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[300001];
int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        v[i - 1] = v[i] - v[i - 1];
    }
    sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < n - k; i++)
    {
        ans += v[i];
    }
    cout << ans << endl;
    return 0;
}
