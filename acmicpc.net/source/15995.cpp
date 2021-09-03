// 15995. 잉여역수 구하기
// 2021.09.03
// 수학
#include<iostream>

using namespace std;

int main()
{
    int a, m;
    cin >> a >> m;
    int i = 1;
    while (1)
    {
        if ((a * i) % m == 1)
        {
            cout << i << endl;
            break;
        }
        i++;
    }
    return 0;
}
