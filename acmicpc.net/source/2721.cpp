// 2721. 삼각수의 합
// 2022.01.01
// 구현
#include<iostream>

using namespace std;

int ans[301];

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= 300; i++)
    {
        ans[i] = ans[i - 1] + i * (((i + 1) * (i + 2)) / 2);
    }

    while (t-- > 0)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}
