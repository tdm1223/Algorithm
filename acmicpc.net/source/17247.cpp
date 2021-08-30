// 17247. 택시 거리
// 2021.08.31
// 수학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int k;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> k;
            if (k == 1)
            {
                v.push_back({ i,j });
            }
        }
    }

    cout << abs(v[0].first - v[1].first) + abs(v[0].second - v[1].second) << endl;
    return 0;
}
