// 11023. 더하기 3
// 2020.11.28
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    while (scanf("%d", &n) != EOF)
    {
        ans += n;
    }
    cout << ans << endl;
    return 0;
}
