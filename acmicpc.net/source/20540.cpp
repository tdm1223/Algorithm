// 20540. 연길이의 이상형
// 2021.06.20
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "ESTJ";

    if (s[0] == 'E')
    {
        ans[0] = 'I';
    }

    if (s[1] == 'S')
    {
        ans[1] = 'N';
    }

    if (s[2] == 'T')
    {
        ans[2] = 'F';
    }

    if (s[3] == 'J')
    {
        ans[3] = 'P';
    }

    cout << ans << endl;
    return 0;
}
