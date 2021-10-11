// 14914. 사과와 바나나 나눠주기
// 2021.10.11
// 브루트포스
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int minValue = min(a, b);

    for (int i = 1; i <= minValue; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << " " << a / i << " " << b / i << endl;
        }
    }
    return 0;
}
