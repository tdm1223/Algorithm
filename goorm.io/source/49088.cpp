// 의좋은 형제
// 2021.10.21
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;

    int num = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i % 2 == 1)
        {
            if (n % 2 == 1)
            {
                num = n / 2 + 1;
                m += num;
                n -= num;
            }
            else
            {
                num = n / 2;
                m += num;
                n -= num;
            }
        }
        else
        {
            if (m % 2 == 1)
            {
                num = m / 2 + 1;
                n += num;
                m -= num;
            }
            else
            {
                num = m / 2;
                n += num;
                m -= num;
            }
        }
    }
    cout << n << " " << m << endl;
    return 0;
}
