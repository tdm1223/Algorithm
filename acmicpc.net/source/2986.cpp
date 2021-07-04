// 2986. 파스칼
// 2021.07.04
// 수학
#include<iostream>

using namespace std;

int main()
{
    int k = 1;
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            k = n / i;
            break;
        }
    }
    cout << n - k << endl;
    return 0;
}
