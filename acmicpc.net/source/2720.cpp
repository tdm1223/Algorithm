// 2720. 세탁소 사장 동혁
// 2021.08.09
// 그리디 알고리즘
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int k;
    while (t-- > 0)
    {
        cin >> k;

        cout << k / 25 << " ";
        k -= (k / 25) * 25;

        cout << k / 10 << " ";
        k -= (k / 10) * 10;

        cout << k / 5 << " ";
        k -= (k / 5) * 5;

        cout << k / 1 << endl;
        k -= (k / 1) * 1;
    }
    return 0;
}
