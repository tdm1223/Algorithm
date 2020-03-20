// 17952. 과제는 끝나지 않아!
// 2019.12.12
// 구현
#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

struct assignment
{
    int score;
    int time;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ans = 0;
    int n;
    cin >> n;
    deque<assignment> assignments;
    while (n-- > 0)
    {
        int k;
        cin >> k;
        if (k == 1)
        {
            int score, time;
            cin >> score >> time;
            assignment cur;
            cur.score = score;
            cur.time = time - 1;
            // 현재 추가된 과제의 시간이 1초짜리면 그냥 점수 추가
            if (cur.time == 0)
            {
                ans += cur.score;
            }
            // 아니면 맨 앞에 넣음
            else
            {
                assignments.push_front(cur);
            }
        }
        else
        {
            assignments.front().time--;
            if (assignments.front().time == 0)
            {
                ans += assignments.front().score;
                assignments.pop_front();
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
