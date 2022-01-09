// 14723. 이산수학 과제
// 2022.01.09
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    while (1)
    {
        cnt++;
        n -= cnt;

        if (n <= 0)
        {
            n += cnt;
            break;
        }
    }
    cnt++;

    cout << cnt - n << " " << n << endl;
    return 0;
}
