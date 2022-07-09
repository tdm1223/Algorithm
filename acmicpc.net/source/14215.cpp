// 14215. 세 막대
// 2022.07.09
// 수학
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    // 작은 두 변의 길이의 합이 제일 긴 변의 길이보다 커야 한다.
    cout << v[0] + v[1] + min(v[2], v[0] + v[1] - 1) << endl;
    return 0;
}
