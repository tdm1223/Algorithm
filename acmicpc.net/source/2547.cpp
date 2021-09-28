// 2547. 사탕 선생 고창영
// 2021.09.28
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long n;
        cin >> n;

        long long sum = 0;
        long long k;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            sum = (sum + k) % n;
        }

        if (sum % n == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
