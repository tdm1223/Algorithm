// 4101. 크냐?
// 2020.10.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        if (a > b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
