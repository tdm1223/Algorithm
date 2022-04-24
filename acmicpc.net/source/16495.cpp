// 16495. 열 순서
// 2022.04.24
// 수학
#include<iostream>
#include<string>

using namespace std;

int main()
{
    long long ans = 0;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        ans *= 26;
        ans += s[i] - 'A' + 1;
    }

    cout << ans << endl;
    return 0;
}
