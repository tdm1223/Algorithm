// 23810. 골뱅이 찍기 - 뒤집힌 ㅋ
// 2022.02.13
// 출력
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 or i == 2)
        {
            for (int j = 0; j < n; j++)
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
            for (int j = 0; j < n; j++)
            {
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
