// 23055. 공사장 표지판
// 2022.02.20
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0) or (i == n - 1))
            {
                cout << "*";
            }
            else if ((j == 0) or (j == n - 1))
            {
                cout << "*";
            }
            else if ((i == j) or (i == n - j - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
