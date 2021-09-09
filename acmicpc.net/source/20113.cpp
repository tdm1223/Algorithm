// 20113. 긴급 회의
// 2021.09.09
// 구현
#include<iostream>

using namespace std;

int arr[101];
int main()
{
    int n;
    cin >> n;

    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        arr[k]++;
    }

    int maxValue = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= maxValue)
        {
            maxValue = arr[i];
        }
    }

    int cnt = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == maxValue)
        {
            ans = i;
            cnt++;
        }
    }

    if (cnt == 1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "skipped" << endl;
    }
    return 0;
}
