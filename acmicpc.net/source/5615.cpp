// 5615. 아파트 임대
// 2021.09.11
// 수학, 밀러-라빈 소수 판별법
#include<iostream>

using namespace std;

unsigned long long int power(unsigned long long x, unsigned long long y, unsigned long long mod)
{
    unsigned long long res = 1;
    x %= mod;
    while (y)
    {
        if (y % 2) res = (res * x) % mod;
        y /= 2;
        x = (x * x) % mod;
    }
    return res;

}
bool miller(unsigned long long n, unsigned long long a)
{
    if (a % n == 0)
    {
        return true;
    }
    unsigned long long k = n - 1;
    while (1)
    {
        unsigned long long tmp = power(a, k, n);
        if (tmp == n - 1)
        {
            return true;
        }
        if (k % 2)
        {
            return (tmp == 1 || tmp == n - 1);
        }
        k /= 2;
    }
}

int main()
{
    int n;
    cin >> n;
    unsigned long long a;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        a = a * 2 + 1;
        if (!miller(a, 2) || !miller(a, 7) || !miller(a, 61))
        {
            ans++;
        }
    }
    cout << n - ans << endl;
    return 0;
}
