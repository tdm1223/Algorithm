// 7567. 그릇
// 2021.07.18
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 10;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            ans += 5;
        }
        else
        {
            ans += 10;
        }
    }
    cout << ans << endl;
    return 0;
}
