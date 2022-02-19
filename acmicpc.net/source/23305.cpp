// 23305. 수강변경
// 2022.02.19
// 그리디 알고리즘
#include<iostream>

using namespace std;

int arr[1000001];
int main()
{
    int n;
    cin >> n;

    int minVal = 1000001;
    int maxVal = -1;

    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k < minVal)
        {
            minVal = k;
        }
        if (k > maxVal)
        {
            maxVal = k;
        }

        arr[k]++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (arr[k] > 0)
        {
            arr[k]--;
        }
    }

    int ans = 0;
    for (int i = minVal; i <= maxVal; i++)
    {
        ans += arr[i];
    }
    cout << ans << endl;
    return 0;
}
