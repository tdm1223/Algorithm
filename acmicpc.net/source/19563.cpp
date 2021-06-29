// 19563. 개구리 1
// 2021.06.29
// 수학
#include<iostream>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    a = abs(a);
    b = abs(b);

    if (a + b <= c)
    {
        if (((a + b) % 2 == 0) && c % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (((a + b) % 2 == 1) && c % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
