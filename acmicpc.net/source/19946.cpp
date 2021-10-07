// 19946. 2의 제곱수 계산하기
// 2021.10.07
// 구현
#include<iostream>

using namespace std;

int main()
{
    unsigned long long n;

    int x = 64;
    cin >> n;

    while (n % 2 == 0)
    {
        n /= 2;
        x--;
    }

    cout << x << endl;
    return 0;
}
