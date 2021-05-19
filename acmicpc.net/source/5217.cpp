// 5217. 쌍의 합
// 2021.05.20
// 구현
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;
    while (t-- > 0)
    {
        cin >> n;
        cout << "Pairs for " << n << ": ";
        if (n % 2 == 0)
        {
            for (int i = 1; i < n / 2; i++)
            {
                if (i == n / 2 - 1)
                {
                    cout << i << " " << n - i;
                }
                else
                {
                    cout << i << " " << n - i << ", ";
                }
            }
        }
        else
        {
            for (int i = 1; i <= n / 2; i++)
            {
                if (i == n / 2)
                {
                    cout << i << " " << n - i;
                }
                else
                {
                    cout << i << " " << n - i << ", ";
                }
            }
        }

        cout << endl;
    }
    return 0;
}
