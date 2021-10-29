// 4375. 1
// 2021.10.29
// 브루트 포스
#include<iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        auto num = 0;
        for (int i = 1; i <= n; i++)
        {
            num = num * 10 + 1;
            num %= n;
            if (num == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
