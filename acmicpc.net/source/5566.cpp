// 5566. 주사위 게임
// 2020.10.03
// 시뮬레이션
#include<iostream>
#include<vector>

using namespace std;

int map[1001];
int order[1001];
int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> map[i];
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> order[i];
    }
    // 순서대로 주사위 확인
    for (int i = 1; i <= m; i++)
    {
        cnt += order[i]; // 주사위에 해당하는 수만큼 이동
        cnt += map[cnt]; // 지시에 해당하는 수만큼 이동
        // 맵을 벗어나면 종료
        if (cnt >= n)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
