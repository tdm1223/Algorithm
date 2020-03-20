// 18228. 펭귄추락대책위원회
// 2019.12.24
// 입문용
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX_VALUE = 2147483647;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == -1)
        {
            idx = i;
        }
    }

    // 왼쪽
    int leftMin = MAX_VALUE;
    for (int i = 0; i < idx; i++)
    {
        leftMin = min(leftMin, v[i]);
    }

    int rightMin = MAX_VALUE;
    for (int i = idx + 1; i < n; i++)
    {
        rightMin = min(rightMin, v[i]);
    }
    cout << leftMin + rightMin << endl;
    return 0;
}
