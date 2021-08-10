// 16504. 종이접기
// 2021.08.10
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> k;
            ans += k;
        }
    }
    cout << ans << endl;
    return 0;
}
