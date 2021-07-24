// 4892. 숫자 맞추기 게임
// 2021.07.24
// 구현
#include<iostream>

using namespace std;

int main()
{
    int cnt = 0;
    int k;
    while (1)
    {
        cnt++;
        cin >> k;
        if (k == 0)
        {
            break;
        }
        if ((k * 3) % 2 == 1)
        {
            cout << cnt << ". odd " << (k - 1) / 2 << endl;
        }
        else
        {
            cout << cnt << ". even " << k / 2 << endl;
        }
    }
    return 0;
}
