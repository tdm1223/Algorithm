// 15829. Hashing
// 2020.05.05
// 해싱
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long r = 1;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long a = (long long)s[i] - 'a' + 1;
        ans += a * r;
        r *= 31;
        r %= 1234567891;
        ans %= 1234567891;
    }
    cout << ans << endl;
    return 0;
}
