// 4592. 중복을 없애자
// 2021.04.21
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n, k;
    int before = -1;
    while (1)
    {
        before = -1;
        cin >> n;
        if (n == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if (before != k)
            {
                cout << k << " ";
            }
            before = k;
        }
        cout << "$" << endl;
    }
    return 0;
}
