// 23802. 골뱅이 찍기 - 뒤집힌 ㄱ
// 2021.12.05
// 구현, 출력
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 5; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    for (int i = 0; i < 4 * n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        cout << endl;
    }
    return 0;
}
