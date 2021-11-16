// 21603. K 2K 게임
// 2021.11.17
// 구현
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

auto Check(int n, int k) -> bool
{
    int x = k % 10;
    if (n % 10 == x)
    {
        return false;
    }

    if (n % 10 == (x * 2) % 10)
    {
        return false;
    }

    return true;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (Check(i, k))
        {
            ans++;
            v.push_back(i);
        }
    }

    cout << ans << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}
