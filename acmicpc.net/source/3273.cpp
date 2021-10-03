// 3273. 두 수의 합
// 2021.10.03
// 정렬
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, x;
    int ans = 0;

    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cin >> x;
    int start = 0;
    int end = n - 1;
    while (1)
    {
        if (start >= end)
        {
            break;
        }

        if (v[start] + v[end] == x)
        {
            start++;
            end--;
            ans++;
        }
        else if (v[start] + v[end] > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    cout << ans << endl;
    return 0;
}
