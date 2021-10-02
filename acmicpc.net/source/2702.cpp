// 2702. 초6 수학
// 2021.10.02
// 수학
#include<iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}
int main()
{
    int n;
    cin >> n;
    while (n-- > 0)
    {
        int a, b;
        cin >> a >> b;

        int gcd = GCD(a, b);
        cout << (a / gcd) * (b / gcd) * gcd << " " << gcd << endl;
    }

    return 0;
}
