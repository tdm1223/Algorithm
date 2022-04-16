// 9295. 주사위
// 2022.04.17
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> m;
        cout << "Case " << i << ": " << n + m << "\n";
    }
    return 0;
}
