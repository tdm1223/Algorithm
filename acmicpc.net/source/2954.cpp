// 2954. 창영이의 일기장
// 2021.05.05
// 문자열
#include<string>
#include<iostream>
#include<set>

using namespace std;

set<char> aeiou = { 'a','e','i','o','u' };
int main()
{
    string s;
    getline(cin, s);
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (aeiou.find(s[i]) != aeiou.end())
        {
            if ((i + 2 < s.size()) && (s[i + 1] == 'p') && (s[i + 2] == s[i]))
            {
                ans += s[i];
                i += 2;
            }
            else
            {
                ans += s[i];
            }
        }
        else
        {
            ans += s[i];
        }
    }

    cout << ans << endl;
    return 0;
}
