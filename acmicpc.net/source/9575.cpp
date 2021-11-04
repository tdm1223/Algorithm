// 9575. 행운의 수
// 2021.11.04
// 브루트 포스
#include<iostream>
#include<set>
#include<vector>

using namespace std;

auto check(int sum) -> bool
{
    while (sum > 0)
    {
        int x = sum % 10;
        if (x != 5 && x != 8)
        {
            return false;
        }
        sum /= 10;
    }
    return true;
}

set<int> sets;
int main()
{
    int t;
    cin >> t;

    vector<int> a;
    vector<int> b;
    vector<int> c;
    while (t-- > 0)
    {
        sets.clear();
        a.clear();
        b.clear();
        c.clear();

        int n, m, o;
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cin >> m;
        b.resize(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        cin >> o;
        c.resize(o);
        for (int i = 0; i < o; i++)
        {
            cin >> c[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < o; k++)
                {
                    int sum = a[i] + b[j] + c[k];
                    if (check(sum))
                    {
                        sets.insert(sum);
                    }
                }
            }
        }
        cout << sets.size() << endl;
    }
    return 0;
}
