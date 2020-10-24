// 1255. 이상한 곱셈
// 2020.10.24
// 구현, 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            ans += (a[i] - '0') * (b[j] - '0');
        }
    }
    cout << ans << endl;
    return 0;
}
