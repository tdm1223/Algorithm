// 19236. 청소년 상어
// 2020.06.28
// 백트래킹, 시뮬레이션, 구현
#include <iostream>

using namespace std;
int map[4][4];
int dx[8] = { -1,-1,0,1,1,1,0,-1 };
int dy[8] = { 0,-1,-1,-1,0,1,1,1 };
int ans;

struct fish
{
    int x;
    int y;
    int dir;
};

fish fishes[17], shark;

void MoveFish()
{
    for (int i = 1; i <= 16; i++)
    {
        if (fishes[i].dir == -1)
        {
            continue;
        }
        int x = fishes[i].x;
        int y = fishes[i].y;
        int dir = fishes[i].dir;

        while (1)
        {
            int yy = y + dy[fishes[i].dir];
            int xx = x + dx[fishes[i].dir];

            // 물고기가 이동하려는 칸이 벗어나거나 상어가 있는 경우
            if (xx < 0 || yy < 0 || xx >= 4 || yy >= 4 || map[xx][yy] == -1)
            {
                fishes[i].dir = (fishes[i].dir + 1) % 8;
                // 8방향 모두 확인한 경우
                if (fishes[i].dir == dir)
                {
                    break;
                }
                continue;
            }

            // 물고기가 이동하려는 칸이 비어있는 경우
            if (map[xx][yy] == 0)
            {
                map[xx][yy] = i;
                map[x][y] = 0;
                fishes[i].x = xx;
                fishes[i].y = yy;
                break;
            }
            // 물고기가 이동하려는 칸에 물고기가 있는 경우
            else if (map[xx][yy] > 0)
            {
                swap(map[xx][yy], map[x][y]);
                swap(fishes[map[xx][yy]], fishes[map[x][y]]);
                swap(fishes[map[xx][yy]].dir, fishes[map[x][y]].dir);
                break;
            }
        }
    }
}

void go(int score)
{
    if (score > ans)
    {
        ans = score;
    }

    MoveFish();

    int tmpMap[4][4];
    fish tmpShark;
    fish tmpFishes[17];
    int x = shark.x;
    int y = shark.y;
    int dir = shark.dir;

    for (int i = 1; i < 4; i++)
    {
        int xx = x + dx[dir] * i;
        int yy = y + dy[dir] * i;

        // 상어가 이동하려는 칸이 범위를 벗어나면 종료
        if (xx < 0 || yy < 0 || xx >= 4 || yy >= 4)
        {
            return;
        }

        if (map[xx][yy] > 0)
        {
            // 값 복사
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    tmpMap[j][k] = map[j][k];
                }
            }
            for (int j = 1; j <= 16; j++)
            {
                tmpFishes[j] = fishes[j];
            }
            tmpShark = shark;

            // 상어 이동
            int num = map[xx][yy];
            shark = fishes[map[xx][yy]];
            fishes[map[xx][yy]] = { -1,-1,-1 };
            map[xx][yy] = -1;
            map[x][y] = 0;
            go(score + num);

            // 복구
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    map[j][k] = tmpMap[j][k];
                }
            }
            for (int j = 1; j <= 16; j++)
            {
                fishes[j] = tmpFishes[j];
            }
            shark = tmpShark;
        }
    }
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int a, b;
            cin >> a >> b;
            map[i][j] = a;
            fishes[a] = { i,j,b - 1 };
        }
    }

    ans = map[0][0];
    shark = fishes[map[0][0]];
    fishes[map[0][0]] = { 0,0,-1 };
    map[0][0] = -1;

    go(ans);
    cout << ans << endl;
}
