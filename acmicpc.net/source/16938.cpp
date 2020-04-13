// 16938. 캠프 준비
// 2020.04.13
// 브루트 포스
#include<iostream>
#include<algorithm>

using namespace std;

int ans;
int n, l, r, x;
int score[15];
// 최소, 최대, 문제수, 시작 인덱스, 문제 난이도 합
void go(int minNum, int maxNum, int cnt, int idx, int sum)
{
    // 2문제 이상 선택했을 때
    if (cnt >= 2)
    {
        // 문제의 합이 l과 r 사이이고 최대점수와 최소점수의 차이가 x보다 클때 경우+1
        if (sum >= l && sum <= r && maxNum - minNum >= x)
        {
            ans++;
        }
        if (cnt == n)
        {
            return;
        }
    }
    // 반복
    for (int i = idx; i < n; i++)
    {
        go(min(minNum, score[i]), max(maxNum, score[i]), cnt + 1, i + 1, sum + score[i]);
    }
}
int main()
{
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    go(1000001, 0, 0, 0, 0);
    cout << ans << endl;
    return 0;
}
