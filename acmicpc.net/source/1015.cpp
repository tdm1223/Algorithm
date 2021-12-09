// 1015. 수열 정렬
// 2021.12.10
// 정렬
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

auto cmp(pair<int, int> a, pair<int, int> b) -> bool
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v[i] = { k, i };
    }
    sort(v.begin(), v.end(), cmp);

    vector<int> ans(n, 0);
    for (int i = 0; i < v.size(); i++)
    {
        ans[v[i].second] = i;
    }

    for (auto k : ans)
    {
        cout << k << " ";
    }
    cout << endl;
    return 0;
}
