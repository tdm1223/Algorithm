// 20949. 효정과 새 모니터
// 2022.04.09
// 정렬
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    // PPI가 동일한 경우 번호가 더 작은 모니터를 먼저 출력
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int w, h;
        cin >> w >> h;
        v.push_back({ i + 1, w * w + h * h });
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << "\n";
    }
    return 0;
}
