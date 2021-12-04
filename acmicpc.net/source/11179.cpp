// 11179. 2진수 뒤집기
// 2021.12.04
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    while (n > 0)
    {
        s += (n % 2) + '0';
        n /= 2;
    }

    int num = 1;
    int ans = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        ans += num * (s[i] - '0');
        num *= 2;
    }
    cout << ans << endl;
    return 0;
}
