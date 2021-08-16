// 3208. gus
// 2021.08.16
// 수학, 영어 문제
#include<iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    if (r > c)
    {
        cout << (c - 1) * 2 + 1 << endl;
    }
    else
    {
        cout << (r - 1) * 2 << endl;
    }
    return 0;
}
