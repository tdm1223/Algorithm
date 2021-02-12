// 11549. Identifying tea
// 2021.02.12
// 입문용
#include<iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> k;
        if (k == n)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
