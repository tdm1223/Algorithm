// 10156. 과자
// 2020.07.03
// 구현
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int k, n, m;
    cin >> k >> n >> m;

    if (k * n - m <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << k * n - m << endl;
    }
    return 0;
}
