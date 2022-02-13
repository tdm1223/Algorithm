// 23808 골뱅이 찍기 - ㅂ
// 2022.02.13
// 구현, 출력
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 5; i++)
    {
        switch (i)
        {
        case 1:
        case 2:
        case 4:
            for (int j = 1; j <= n; j++)
            {
                for (int k = 0; k < 5 * n; k++)
                {
                    if (k / n == 0 or k / n == 4)
                    {
                        cout << "@";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 3:
        case 5:
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k <= 5 * n; k++)
                {
                    cout << "@";
                }
                cout << endl;
            }
            break;
        }

    }
    return 0;
}
