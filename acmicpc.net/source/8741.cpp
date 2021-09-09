// 8741. 이진수 합
// 2021.09.09
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // N = 2 -> 110
    // N = 3 -> 11100
    // N = 4 -> 1111000
    for (int i = 0; i < n; i++)
    {
        cout << 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << 0;
    }
    return 0;
}
