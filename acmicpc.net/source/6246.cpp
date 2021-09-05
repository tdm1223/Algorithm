// 6246. 풍선 놀이
// 2021.09.05
// 구현
#include<iostream>

using namespace std;

int arr[10001];
int main()
{
    int n, q;
    cin >> n >> q;

    int l, i;
    for (int loop = 0; loop < q; loop++)
    {
        cin >> l >> i;
        for (int j = l; j <= n; j += i)
        {
            arr[j] = 1;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
