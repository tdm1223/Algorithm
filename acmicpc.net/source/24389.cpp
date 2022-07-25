// 24389. 2의 보수
// 2022.07.25
// 수학
#include<iostream>

using namespace std;

int main()
{
    long long n1;
    cin >> n1;
    long long n2 = ~n1 + 1;

    int ans = 0;
    long long k = 1;
    for (int i = 0; i < 32; i++)
    {
        ans += (bool)((n1 & (k << i))) ^ (bool)(n2 & (k << i));
    }
    cout << ans << endl;

    return 0;
}
