// 10214. Baseball
// 2020.10.02
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int y = 0;
        int k = 0;
        int a, b;
        for (int i = 0; i < 9; i++)
        {
            cin >> a >> b;
            y += a;
            k += b;
        }

        if (y > k)
        {
            cout << "Yonsei" << endl;
        }
        else if (y < k)
        {
            cout << "Korea" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
