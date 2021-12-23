// 1731. 추론
// 2021.12.23
// 수학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // 등차
    if (v[1] - v[0] == v[2] - v[1])
    {
        cout << v[n - 1] + v[1] - v[0] << endl;
    }
    // 등비
    else
    {
        cout << v[n - 1] * (v[1] / v[0]) << endl;
    }
    return 0;
}
