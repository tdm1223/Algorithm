// 20299. 3대 측정
// 2021.07.09
// 구현
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> ans;
    int cnt = 0;
    int n, k, l;
    cin >> n >> k >> l;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= l && b >= l && c >= l)
        {
            if (a + b + c >= k)
            {
                cnt++;
                ans.push_back(a);
                ans.push_back(b);
                ans.push_back(c);
            }
        }
    }

    cout << cnt << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
