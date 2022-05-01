// 2559. 수열
// 2022.05.01
// 투 포인터
#include<iostream>
#include<algorithm>

using namespace std;

int arr[100000];

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int idx = 0;
    int ans = -987654321;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        idx++;
        if (idx == k)
        {
            ans = max(ans, sum);

            // two pointer
            sum -= arr[i - k + 1];
            idx--;
        }
    }
    cout << ans << endl;
    return 0;
}
