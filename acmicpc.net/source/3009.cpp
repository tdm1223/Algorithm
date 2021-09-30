// 3009. 네 번째 점
// 2021.09.30
// 기하학
#include<iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        a ^= x;
        b ^= y;
    }
    cout << a << " " << b << endl;
    return 0;
}
