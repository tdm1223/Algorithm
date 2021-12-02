// 14614. Calculate!
// 2021.12.03
// 수학
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    string c;
    cin >> a >> b >> c;

    // 같은 수를 짝수번 XOR 연산한 값은 0이다.
    int k = c[c.size() - 1] - '0';
    if (k % 2 == 0)
    {
        cout << a << endl;
    }
    else
    {
        cout << (a ^ b) << endl;
    }
    return 0;
}
