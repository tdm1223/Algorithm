// 9501. 꿍의 우주여행
// 2022.01.24
// 구현
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, d, ans = 0;
        cin >> n >> d;
        while (n--)
        {
            int v, f, c;
            cin >> v >> f >> c;

            if (v * f / c >= d)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
