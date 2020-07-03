// 1436. 영화감독 숌
// 2020.07.03
// 탐색
#include<iostream>

using namespace std;

bool check(int num)
{
    while (num != 0)
    {
        if (num % 1000 == 666)
        {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main()
{
    int num = 666;
    int cnt = 0;
    int n;
    bool flag;
    cin >> n;

    while (1)
    {
        flag = false;

        if (check(num))
        {
            cnt++;
        }

        if (cnt == n)
        {
            break;
        }
        num++;
    }

    cout << num << endl;
    return 0;
}
