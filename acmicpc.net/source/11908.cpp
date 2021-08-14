// 11908. 카드
// 2021.08.14
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int arr[2223];
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }

    sort(arr, arr + n);

    cout << ans - arr[n - 1] << endl;
    return 0;
}
