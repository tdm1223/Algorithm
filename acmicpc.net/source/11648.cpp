// 11648. 지속
// 2021.03.12
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n;
    int ans = 0;
    while (k >= 10)
    {
        k = 1;
        while (n != 0)
        {
            k *= n % 10;
            n /= 10;
        }
        n = k;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
