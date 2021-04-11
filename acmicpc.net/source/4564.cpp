// 4564. 숫자 카드놀이
// 2021.04.11
// 구현
#include<iostream>

using namespace std;

int func(int k)
{
    int ans = 1;
    while (k > 0)
    {
        ans *= k % 10;
        k /= 10;
    }
    return ans;
}

int main()
{
    int k;
    int tmp;
    while (1)
    {
        cin >> k;
        if (k == 0)
        {
            break;
        }
        cout << k;
        if (k < 10)
        {
            cout << endl;
            continue;
        }
        cout << " ";
        while (1)
        {
            tmp = func(k);
            cout << tmp << " ";
            k = tmp;
            if (k < 10)
            {
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
