// 8912. Sales
// 2021.09.06
// 구현
#include<iostream>

using namespace std;

int arr[1001];
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int ans = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            cnt = 0;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] >= arr[j])
                {
                    cnt++;
                }
            }
            ans += cnt;
        }
        cout << ans << endl;
    }
    return 0;
}
