// 1453. 피시방 알바
// 2021.10.15
// 구현
#include<iostream>

using namespace std;

int arr[101];
int main()
{
    int n;
    cin >> n;

    int k;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (arr[k] == 1)
        {
            ans++;
        }
        else
        {
            arr[k] = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
