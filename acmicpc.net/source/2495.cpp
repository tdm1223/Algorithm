// 2495. 연속구간
// 2021.06.24
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;

        int ans = 0;
        int cnt = 1;
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] == s[j - 1])
            {
                cnt++;
            }
            else
            {
                if (ans < cnt)
                {
                    ans = cnt;
                }
                cnt = 1;
            }
        }
        if (ans < cnt)
        {
            ans = cnt;
        }
        cout << ans << endl;
    }
    return 0;
}
