// 15947. 아기 석환 뚜루루 뚜루
// 2020.12.08
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n / 14;
    int m = n % 14;

    switch (m)
    {
    case 1:
    case 13:
        cout << "baby" << endl;
        break;
    case 0:
    case 2:
        cout << "sukhwan" << endl;
        break;
    case 3:
    case 7:
    case 11:
        if (k == 0)
        {
            cout << "tururu" << endl;
        }
        else if (k == 1)
        {
            cout << "turururu" << endl;
        }
        else if (k == 2)
        {
            cout << "tururururu" << endl;
        }
        else
        {
            cout << "tu+ru*" << k + 2 << endl;
        }
        break;
    case 4:
    case 8:
    case 12:
        if (k == 0)
        {
            cout << "turu" << endl;
        }
        else if (k == 1)
        {
            cout << "tururu" << endl;
        }
        else if (k == 2)
        {
            cout << "turururu" << endl;
        }
        else if (k == 3)
        {
            cout << "tururururu" << endl;
        }
        else
        {
            cout << "tu+ru*" << k + 1 << endl;
        }
        break;
    case 5:
        cout << "very" << endl;
        break;
    case 6:
        cout << "cute" << endl;
        break;
    case 9:
        cout << "in" << endl;
        break;
    case 10:
        cout << "bed" << endl;
        break;
    }
    return 0;
}
