// 16198. 에너지 모으기
// 2019.12.26
// 브루트 포스
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n;
int ans = 0;

void go(int cnt, int value, vector<int>& marble)
{
    // 종료조건
    if (cnt == n - 2)
    {
        ans = max(ans, value);
        return;
    }

    // 차례대로 구슬을 선택한다.
    for (int i = 1; i < marble.size() - 1; i++)
    {
        vector<int> tmp;
        // 선택한 구슬을 제거하고 다시 번호를 매긴다.
        for (int j = 0; j < marble.size(); j++)
        {
            if (j == i)
            {
                continue;
            }
            tmp.push_back(marble[j]);
        }
        go(cnt + 1, value + marble[i - 1] * marble[i + 1], tmp);
    }
}

int main()
{
    cin >> n;
    vector<int>marbles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> marbles[i];
    }
    go(0, 0, marbles);
    cout << ans << "\n";
    return 0;
}
