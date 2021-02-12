// 9076. 점수 집계
// 2021.02.12
// 구현
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    while (t-- > 0)
    {
        v.resize(5);
        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[3] - v[1] >= 4)
        {
            cout << "KIN" << endl;
        }
        else
        {
            cout << v[1] + v[2] + v[3] << endl;
        }
    }
    return 0;
}
