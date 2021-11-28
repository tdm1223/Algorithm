// 20004. 베스킨라빈스 31
// 2021.11.28
// 게임 이론
#include<iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    // 30 % (n + 1)를 부르는 사람이 이긴다.
    for (int i = 1; i <= a; i++)
    {
        if (30 % (i + 1) == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
