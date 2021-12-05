// 23803. 골뱅이 찍기 - ㄴ
// 2021.12.06
// 출력
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 4 * n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 5; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}
