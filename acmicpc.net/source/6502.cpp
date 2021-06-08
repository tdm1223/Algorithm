// 6502. 동혁 피자
// 2021.06.09
// 구현
#include<iostream>

using namespace std;

int main()
{
    int cnt = 1;
    while (1)
    {
        int w;
        cin >> w;
        if (w == 0)
        {
            break;
        }
        int l, h;
        cin >> l >> h;

        // w * w >= h / 2 * h / 2 + l / 2 * l / 2
        if (4 * w * w >= h * h + l * l)
        {
            cout << "Pizza " << cnt << " fits on the table." << endl;
        }
        else {
            cout << "Pizza " << cnt << " does not fit on the table." << endl;
        }
        cnt++;
    }
    return 0;
}
