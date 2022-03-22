// 14626. ISBN
// 2022.03.22
// 브루트포스
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int idx = 0;
    int num = 0;

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '*')
        {
            if (i % 2 == 0)
            {
                num += s[i] - '0';
            }
            else
            {
                num += (s[i] - '0') * 3;
            }
        }
        else
        {
            idx = i;
        }
    }

    int ans = 0;
    while (true)
    {
        if (idx % 2 == 0)
        {
            if ((num + ans) % 10 == 0)
            {
                cout << ans << endl;
                break;
            }
        }
        else
        {
            if ((num + ans * 3) % 10 == 0)
            {
                cout << ans << endl;
                break;
            }
        }
        ans++;
    }
    return 0;
}
