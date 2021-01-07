// 14920. 3n+1 수열
// 2021.01.08
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
