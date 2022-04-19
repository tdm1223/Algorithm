// 13699. 점화식
// 2022.04.19
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

long long d[35];
int main()
{
    int n;
    cin >> n;

    d[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            d[i] += d[j] * d[i - j - 1];
        }
    }

    cout << d[n] << endl;
    return 0;
}
