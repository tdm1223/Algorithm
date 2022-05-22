// 15780. 멀티탭 충분하니?
// 2022.05.22
// 수학
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int x;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        if (x % 2 == 1)
        {
            n -= (x / 2 + 1);
        }
        else
        {
            n -= x / 2;
        }
    }

    if (n <= 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
