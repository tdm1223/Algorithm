// 19564. 반복
// 2021.08.07
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 1;
    char cur = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] <= cur)
        {
            ans++;
        }
        cur = s[i];
    }

    cout << ans << endl;
    return 0;
}
