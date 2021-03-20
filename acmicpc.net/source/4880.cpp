// 4880. 다음수
// 2021.03.20
// 수학
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        if (b - a == c - b)
        {
            cout << "AP " << c + (c - b) << endl;
        }
        else
        {
            cout << "GP " << c * (c / b) << endl;
        }
    }
    return 0;
}
