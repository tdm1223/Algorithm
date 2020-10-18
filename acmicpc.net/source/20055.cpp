// 20055. 컨베이어 벨트 위의 로봇
// 2020.10.19
// 시뮬레이션
#include<iostream>
#include<queue>

using namespace std;

int rail[2][101];
bool isRobot[101];

struct robot
{
    int x;
    int y;
    bool isEnd = false;
};
int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> rail[0][i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> rail[1][i];
    }

    int ans = 0;
    queue<int> q1;
    queue<int> q2;

    int railCnt = 0;
    while (1)
    {
        ans++;

        // 벨트 한칸 회전
        q1.push(rail[1][0]);
        for (int i = 0; i < n - 1; i++)
        {
            q1.push(rail[0][i]);
        }
        for (int i = 1; i < n; i++)
        {
            q2.push(rail[1][i]);
        }
        q2.push(rail[0][n - 1]);
        int cnt = 0;
        while (!q1.empty())
        {
            int x = q1.front();
            q1.pop();
            rail[0][cnt++] = x;
        }
        cnt = 0;
        while (!q2.empty())
        {
            int x = q2.front();
            q2.pop();
            rail[1][cnt++] = x;
        }

        // 로봇들 이동
        for (int i = n - 2; i >= 0; i--)
        {
            // 해당 지점에 로봇이 있다면 컨베이어 벨트이동에 맞춰 한칸 오른쪽으로 이동
            if (isRobot[i] == 1)
            {
                isRobot[i + 1] = 1;
                isRobot[i] = 0;
                if (i + 1 == n - 1)
                {
                    isRobot[i + 1] = 0;
                }
            }
        }

        // 번호순대로 로봇 이동
        for (int i = n - 2; i >= 0; i--)
        {
            // 이동할 수 있음
            if (isRobot[i] == 1 && rail[0][i + 1] >= 1 && isRobot[i + 1] == 0)
            {
                // 현재 위치 로봇 없다고 표시
                isRobot[i] = 0;

                // 이동 하려는 곳의 레일 내구도 감소
                rail[0][i + 1]--;

                // 내구도가 0이면 0인 숫자 증가
                if (rail[0][i + 1] == 0)
                {
                    railCnt++;
                }

                // 로봇 이동
                isRobot[i + 1] = 1;
                if (i + 1 == n - 1)
                {
                    isRobot[i + 1] = 0;
                }
            }
        }

        // 새로운 로봇 추가
        if (rail[0][0] >= 1 && isRobot[0] == false)
        {
            isRobot[0] = 1;
            rail[0][0]--;
            if (rail[0][0] == 0)
            {
                railCnt++;
            }
        }

        if (railCnt >= k)
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
