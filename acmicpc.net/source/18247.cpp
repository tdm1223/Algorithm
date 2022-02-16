// 18247. 겨울왕국 티켓 예매
// 2022.02.17
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;

        // L == 12
        if (a >= 12 and b >= 4)
        {
            cout << 11 * b + 4 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
