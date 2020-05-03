// 10996. 별 찍기 - 21
// 2020.05.03
// 구현
#include<iostream>

using namespace std;

void even(int n)
{
    n++;
    for (int i = 0; i < n / 2; i++)
    {
        cout << "* ";
    }
    cout << endl;
}

void odd(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        cout << " *";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "*" << endl;
    }
    else
    {
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
            {
                even(n);
            }
            else
            {
                odd(n);
            }
        }
    }
    return 0;
}
