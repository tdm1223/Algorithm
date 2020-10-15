// 10810. 공 넣기
// 2020.10.16
// 구현
#include<iostream>

using namespace std;

int balls[101];
int main()
{
    int n, m;
    cin >> n >> m;

    int i, j, k;
    while (m-- > 0)
    {
        cin >> i >> j >> k;
        for (int x = i; x <= j; x++)
        {
            balls[x] = k;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << balls[i] << " ";
    }
    cout << endl;
    return 0;
}
