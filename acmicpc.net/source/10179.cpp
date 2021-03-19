// 10179. 쿠폰
// 2021.03.19
// 수학
#include <iostream>

using namespace std;

int main()
{
    int n;
    double k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        printf("$%.2f\n", k * 0.8);
    }
    return 0;
}
