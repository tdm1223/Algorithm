// 17520. Balanced String
// 2022.02.27
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    long long d[100001];

    cin >> n;

    d[1] = 2;
    for (int i = 2; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            d[i] = d[i - 1];
        }
        else
        {
            d[i] = (d[i - 1] * 2) % 16769023;
        }
    }

    cout << d[n] << endl;
    return 0;
}
