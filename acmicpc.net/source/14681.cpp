// 14681. 사분면 고르기
// 2020.04.29
// 입문용
#include<iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
    {
        cout << 1 << endl;
    }
    else if (x < 0 && y>0)
    {
        cout << 2 << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << 3 << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << 4 << endl;
    }
}
