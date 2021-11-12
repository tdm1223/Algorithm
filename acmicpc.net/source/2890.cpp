// 2890. 카약
// 2021.11.13
// 구현
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int r, c;
int ans[51];

auto cmp(pair<int, int> a, pair<int, int> b) -> bool
{
    return a.second > b.second;
}

int main()
{
    cin >> r >> c;

    // 첫번째로 등장하는 위치, 인덱스
    vector<pair<int, int>> v;

    string s;
    for (int i = 0; i < r; i++)
    {
        cin >> s;
        for (int j = s.size() - 1; j >= 0; j--)
        {
            if (s[j] >= '1' && s[j] <= '9')
            {
                v.push_back({ s[j] - '0', j });
                break;
            }
        }
    }

    sort(v.begin(), v.end(), cmp);

    int rank = 1;
    ans[v[0].first] = rank;
    int prev = v[0].second;
    for (int i = 1; i < v.size(); i++)
    {
        if (prev == v[i].second)
        {
            ans[v[i].first] = rank;
        }
        else
        {
            rank++;
            ans[v[i].first] = rank;
            prev = v[i].second;
        }
    }

    for (int i = 1; i <= 9; i++)
    {
        cout << ans[i] << "\n";
    }
    return 0;
}
