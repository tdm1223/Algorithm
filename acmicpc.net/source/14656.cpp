// 14656. 조교는 새디스트야!!
// 2021.02.13
// 입문용
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k != i)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
