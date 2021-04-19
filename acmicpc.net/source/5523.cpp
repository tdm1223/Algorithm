// 5523. 경기 결과
// 2021.04.20
// 구현
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int aWin = 0;
    int bWin = 0;

    int a, b;
    while (t-- > 0)
    {
        cin >> a >> b;
        if (a < b)
        {
            bWin++;
        }
        else if (a > b)
        {
            aWin++;
        }
    }
    cout << aWin << " " << bWin << endl;
    return 0;
}
