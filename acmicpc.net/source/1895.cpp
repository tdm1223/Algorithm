// 1895. 필터
// 2022.06.25
// 브루트포스
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int v[41][41];

int main()
{
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    int ans = 0;
    int t;
    cin >> t;
    vector<int> nums;
    for (int i = 0; i < r - 2; i++)
    {
        for (int j = 0; j < c - 2; j++)
        {
            nums.clear();
            for (int x = i; x < i + 3; x++)
            {
                for (int y = j; y < j + 3; y++)
                {
                    nums.push_back(v[x][y]);
                }
            }
            sort(nums.begin(), nums.end());
            if (nums[4] >= t)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
