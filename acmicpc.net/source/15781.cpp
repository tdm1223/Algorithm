// 15781. 헬멧과 조끼
// 2020.10.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a = 0;
    int b = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > a)
        {
            a = x;
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        if (x > b)
        {
            b = x;
        }
    }
    cout << a + b << endl;
    return 0;
}
