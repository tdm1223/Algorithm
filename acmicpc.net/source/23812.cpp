// 23812. 골뱅이 찍기 - 돌아간 ㅍ
// 2022.03.07
// 출력
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 0; k < 5 * n; k++)
                {
                    cout << "@";
                }
                cout << endl;
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    cout << "@";
                }
                for (int k = 0; k < 3 * n; k++)
                {
                    cout << " ";
                }
                for (int k = 0; k < n; k++)
                {
                    cout << "@";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
