// 19237. 어른 상어
// 2020.10.17
// 시뮬레이션
#include<iostream>

using namespace std;

int dx[5] = { -1, -1, 1, 0, 0 };
int dy[5] = { -1, 0, 0, -1, 1 };

pair<int, int> smell[21][21]; // 상어번호, 냄새남은시간

struct shark
{
    int dir;
    int x;
    int y;
    int op[5][5]; // 각 방향별 우선순위를 저장
    bool move = false; // 이동했는지 체크 하는 변수
    bool isAlive = true; // 살아있는지 체크 하는 변수
};

shark sharks[401];

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> smell[i][j].first;
            if (smell[i][j].first != 0)
            {
                smell[i][j].second = k;
                sharks[smell[i][j].first].x = i;
                sharks[smell[i][j].first].y = j;
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> sharks[i].dir;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                cin >> sharks[i].op[j][k];
            }
        }
    }

    bool flag = true;
    int ans = 0;
    while (1)
    {
        ans++;
        if (ans == 1001)
        {
            ans = -1;
            break;
        }
        // 상어의 이동 유무를 초기화
        for (int i = 1; i <= m; i++)
        {
            sharks[i].move = false;
        }

        // 모든 상어에 대해 조사
        for (int num = 1; num <= m; num++)
        {
            if (sharks[num].isAlive == false)
            {
                continue;
            }

            for (int j = 1; j <= 4; j++)
            {
                int newDir = sharks[num].op[sharks[num].dir][j];
                int xx = sharks[num].x + dx[newDir];
                int yy = sharks[num].y + dy[newDir];

                // 이동할 수 없는 칸
                if (xx < 0 || yy < 0 || xx >= n || yy >= n)
                {
                    continue;
                }

                // 이동 가능한 칸
                if (smell[xx][yy].first == 0)
                {
                    smell[xx][yy].first = num;
                    sharks[num].x = xx;
                    sharks[num].y = yy;
                    sharks[num].move = true;
                    sharks[num].dir = newDir;
                    break;
                }

                // 이동하는곳에 상어가 있으나 냄새가 아직 베이지 않은경우(둘이 같은 곳을 이동하는 경우)
                else if (smell[xx][yy].first != 0 && smell[xx][yy].second == 0)
                {
                    smell[xx][yy].first = min(smell[xx][yy].first, num);
                    sharks[max(smell[xx][yy].first, num)].isAlive = false;
                    sharks[num].x = xx;
                    sharks[num].y = yy;
                    sharks[num].move = true;
                    sharks[num].dir = newDir;
                    break;
                }
                else
                {
                    continue;
                }
            }

            // 자신의 냄새로 다시 이동
            if (sharks[num].move == false && sharks[num].isAlive)
            {
                for (int j = 1; j <= 4; j++)
                {
                    int newDir = sharks[num].op[sharks[num].dir][j];
                    int xx = sharks[num].x + dx[newDir];
                    int yy = sharks[num].y + dy[newDir];

                    // 이동할 수 없는 칸
                    if (xx < 0 || yy < 0 || xx >= n || yy >= n)
                    {
                        continue;
                    }

                    if (smell[xx][yy].first == num)
                    {
                        sharks[num].x = xx;
                        sharks[num].y = yy;
                        sharks[num].dir = newDir;
                        smell[xx][yy].second = k;
                        break;
                    }
                }
            }
        }

        // 모든 맵의 냄새를 지워줌
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (smell[i][j].second != 0)
                {
                    smell[i][j].second--;
                    if (smell[i][j].second == 0)
                    {
                        smell[i][j].first = 0;
                    }
                }
            }
        }

        // 모든 상어가 새로 이동한곳에 냄새를 새로 추가함
        for (int i = 1; i <= m; i++)
        {
            if (sharks[i].isAlive)
            {
                smell[sharks[i].x][sharks[i].y].second = k;
            }
        }

        // 상어 1만 남았는지 체크
        bool isEnd = true;
        for (int i = 2; i <= m; i++)
        {
            if (sharks[i].isAlive)
            {
                isEnd = false;
            }
        }

        if (isEnd)
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
