// 1740. 거듭제곱
// 2020.09.05
// 수학
#include<iostream>
#include<vector>

using namespace std;

long long Power(int i)
{
    if (i == 0)
    {
        return 1;
    }
    return Power(i - 1) * 3;
}

int main()
{
    long long ans = 0;
    long long n;
    cin >> n;
    vector <int> v;
    // n을 2진수로 바꿈
    while (n > 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    // 2진수로 바꾼걸 3진수로 바꿈
    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i] * Power(i);
    }
    cout << ans << endl;
    return 0;
}
