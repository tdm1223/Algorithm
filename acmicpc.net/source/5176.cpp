// 5176. 대회 자리
// 2021.06.11
// 구현
#include<iostream>

using namespace std;

int arr[501];
int main()
{
    int t;
    int k;
    int ans = 0;
    cin >> t;
    while (t-- > 0)
    {
        ans = 0;
        int p, m;
        cin >> p >> m;

        for (int i = 0; i < 501; i++)
        {
            arr[i] = 0;
        }

        for (int i = 0; i < p; i++)
        {
            cin >> k;
            arr[k] = 1;
        }

        for (int i = 1; i <= m; i++)
        {
            if (arr[i] == 1)
            {
                ans++;
            }
        }
        cout << p - ans << endl;
    }
    return 0;
}
