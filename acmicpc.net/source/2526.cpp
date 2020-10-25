// 2526. 싸이클
// 2020.10.25
// 구현
#include<iostream>
#include<vector>

using namespace std;

int num[98];

int n, p;
void go(int x)
{
    // 두번 나오면 종료
    if (num[x] == 2)
    {
        return;
    }
    num[x]++;
    go(x * n % p);
}

int main()
{
    cin >> n >> p;
    int ans = 0;

    go(n);

    for (int i = 0; i < p; i++)
    {
        if (num[i] == 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
