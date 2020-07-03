// 1940. 주몽
// 2020.07.03
// 수학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] == 0)
            {
                continue;
            }
            if (v[i] + v[j] == m)
            {
                ans++;
                v[i] = 0;
                v[j] = 0;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
