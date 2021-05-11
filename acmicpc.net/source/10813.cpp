// 10813. 공 바꾸기
// 2021.05.11
// 구현, 시뮬레이션
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        swap(v[a - 1], v[b - 1]);
    }


    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
