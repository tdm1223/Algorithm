// 1329. 노래 악보
// 2020.11.17
// 구현
#include<iostream>

using namespace std;

int t[10001];
int main()
{
    int n, q;
    cin >> n >> q;

    int x;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            t[cnt++] = i;
        }
    }

    for (int i = 0; i < q; i++)
    {
        cin >> x;
        cout << t[x % cnt] << endl;
    }
    return 0;
}
