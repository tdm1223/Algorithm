// 1246. 온라인 판매
// 2022.03.07
// 그리디 알고리즘
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int maxCnt = -1;
    int maxValue = -1;

    int cnt = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cnt++;
        if (v[i] * cnt > maxValue)
        {
            maxCnt = v[i];
            maxValue = v[i] * cnt;
        }
        if (cnt == n)
        {
            break;
        }
    }

    cout << maxCnt << " " << maxValue << endl;
    return 0;
}
