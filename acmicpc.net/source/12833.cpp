// 12833. XORXORXOR
// 2021.08.12
// 구현
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c % 2 == 0)
    {
        cout << a << endl;
    }
    else
    {
        cout << (a ^ b) << endl;
    }
    return 0;
}
