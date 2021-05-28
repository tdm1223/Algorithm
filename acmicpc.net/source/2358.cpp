// 2358. 평행선
// 2021.05.28
// 자료구조
#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> xMap;
    map<int, int> yMap;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        xMap[x]++;
        yMap[y]++;
    }

    int ans = 0;
    for (auto x : xMap)
    {
        if (x.second >= 2)
        {
            ans++;
        }
    }

    for (auto y : yMap)
    {
        if (y.second >= 2)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
