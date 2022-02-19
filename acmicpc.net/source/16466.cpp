// 16466. 콘서트
// 2022.02.19
// 구현
#include<iostream>

using namespace std;

int arr[1000001];
int main()
{
    int n;
    cin >> n;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        arr[k] = 1;
    }

    int ans = 0;
    for (int i = 1;; i++)
    {
        if (arr[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
