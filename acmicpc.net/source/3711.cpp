// 3711. 학번
// 2021.09.08
// 브루트 포스
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = -1;
        set<int> s;
        for (int i = 1; i <= 999999; i++)
        {
            s.clear();
            for (int j = 0; j < n; j++)
            {
                s.insert(v[j] % i);
            }
            if (s.size() == n)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
