// 23037. 5의 수난
// 2021.09.12
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        ans += pow(n % 10, 5);
        n /= 10;
    }
    cout << ans << endl;
    return 0;
}
