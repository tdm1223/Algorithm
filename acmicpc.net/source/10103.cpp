// 10103. 주사위 게임
// 2020.10.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 100;
    int b = 100;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > y)
        {
            b -= x;
        }
        else if (x < y)
        {
            a -= y;
        }
    }
    cout << a << endl << b << endl;
    return 0;
}
