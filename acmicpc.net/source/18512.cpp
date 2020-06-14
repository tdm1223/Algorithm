// 18512. 점프 점프
// 2020.06.14
// 수학
#include <iostream>

using namespace std;

int main()
{
    int x, y, p1, p2;
    cin >> x >> y >> p1 >> p2;

    while (1)
    {
        if (p1 > p2)
        {
            p2 += y;
        }
        else if (p1 < p2)
        {
            p1 += x;
        }
        else
        {
            cout << p1 << endl;
            break;
        }

        // 만날수없음
        if (p1 > 100000 && p2 > 100000)
        {
            cout << -1 << endl;
            break;
        }
    }
}
