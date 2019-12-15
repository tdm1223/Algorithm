// 1568.새
// 2019.12.15
// 탐색
#include<iostream>

using namespace std;

int d[101];
int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    int ans = 0;
    while (n > 0)
    {
        if (cnt > n)
        {
            cnt = 1;
        }
        else
        {
            n -= cnt;
            cnt++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
