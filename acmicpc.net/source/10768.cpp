// 10766. 특별한 날
// 2021.03.07
// 입문용
#include<iostream>

using namespace std;

int main()
{
    int m, d;
    cin >> m >> d;
    if (m < 2)
    {
        cout << "Before" << endl;
    }
    else if (m > 2)
    {
        cout << "After" << endl;
    }
    else
    {
        if (d > 18)
        {
            cout << "After" << endl;
        }
        else if (d < 18)
        {
            cout << "Before" << endl;
        }
        else
        {
            cout << "Special" << endl;
        }
    }
    return 0;
}
