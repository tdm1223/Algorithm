// 8931. 제로
// 2019.12.10
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int testCase = 1; testCase <= t; testCase++)
    {
        int n;
        cin >> n;
        int ans = 0;
        stack<int> s;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            // 0이면 맨위 제거
            if (x == 0)
            {
                s.pop();
            }
            else
            {
                s.push(x);
            }
        }
        while (!s.empty())
        {
            ans += s.top();
            s.pop();
        }
        cout << "#" << testCase << " " << ans << "\n";
    }
    return 0;
}
