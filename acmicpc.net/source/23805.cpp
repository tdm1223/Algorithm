// 23805. 골뱅이 찍기 - 돌아간 ㄹ
// 2021.12.08
// 출력
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 3; j++)
        {
            cout << "@";
        }
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    for (int i = 0; i < 3 * n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 3; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}
