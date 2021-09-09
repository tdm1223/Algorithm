// 8892. 팰린드롬
// 2021.09.09
// 브루트 포스
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool CheckPalindrome(string& tmp)
{
    for (int i = 0; i < tmp.size() / 2; i++)
    {
        if (tmp[i] != tmp[tmp.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        string ans = "0";
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (!flag)
            {
                break;
            }
            for (int j = 0; j < n; j++)
            {
                if (!flag)
                {
                    break;
                }
                if (i == j)
                {
                    continue;
                }

                string tmp = v[i] + v[j];
                if (CheckPalindrome(tmp))
                {
                    ans = tmp;
                    flag = false;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
