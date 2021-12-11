// 1059. 좋은 구간
// 2021.12.12
// 브루트 포스
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v.push_back(0);
    v.push_back(1000);
    sort(v.begin(), v.end());

    int k;
    cin >> k;

    int idx = -1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] < k and k < v[i + 1])
        {
            idx = i;
            break;
        }
    }

    int ans = 0;
    if (idx == -1)
    {
        cout << ans << endl;
    }
    else
    {
        for (int i = v[idx] + 1; i < v[idx + 1]; i++)
        {
            for (int j = i + 1; j < v[idx + 1]; j++)
            {
                if (i <= k and k <= j)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
