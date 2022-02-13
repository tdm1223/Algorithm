// 23794. 골뱅이 찍기 - 정사각형
// 2022.02.13
// 출력
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n + 2; i++)
    {
        if (i == 1 or i == n + 2)
        {
            for (int j = 1; j <= n + 2; j++)
            {
                cout << "@";
            }
        }
        else
        {
            for (int j = 1; j <= n + 2; j++)
            {
                if (j == 1 or j == n + 2)
                {
                    cout << "@";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
