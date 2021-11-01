// 1233. 주사위
// 2021.11.01
// 브루트포스
#include<iostream>

using namespace std;

int sums[101];
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sums[i + j + k]++;
            }
        }
    }

    int ans = -1;
    int val = 0;
    for (int i = 1; i <= a + b + c; i++)
    {
        if (sums[i] > val)
        {
            ans = i;
            val = sums[i];
        }
    }
    cout << ans << endl;
    return 0;
}
