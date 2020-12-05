// 10864. 친구
// 2020.12.05
// 구현
#include<iostream>

using namespace std;

int friends[1001];
int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        friends[a]++;
        friends[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << friends[i] << endl;
    }
    return 0;
}
