// 10025. 게으른 백곰
// 2021.10.29
// 투 포인터
#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000001];
int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int g, x;
        cin >> g >> x;
        arr[x] = g;
    }

    int ans = 0;
    for (int i = 0; i <= 2 * k and i < 1000001; i++)
    {
        ans += arr[i];
    }

    int sum = ans;
    for (int i = 2 * k + 1; i < 1000001; i++)
    {
        sum -= arr[i - 2 * k - 1];
        sum += arr[i];
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
