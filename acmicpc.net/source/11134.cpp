// 11134. 쿠키애호가
// 2020.10.07
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, c;
        cin >> n >> c;
        cout << (n / c) + (n % c == 0 ? 0 : 1) << endl;
    }
    return 0;
}
