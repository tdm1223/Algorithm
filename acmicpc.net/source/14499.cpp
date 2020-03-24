// 14499. 주사위 굴리기
// 2020.03.24
// 시뮬레이션
#include<iostream>

using namespace std;

// 1 ~ 4 : 동 서 북 남
int dx[5] = { 0, 0,0,-1,1 };
int dy[5] = { 0,1,-1,0,0 };
int map[21][21];
int dice[7]; // dice[1~6] : 문제의 그림에 나온 1~6에 쓰인 숫자

// 나머지 처리. 바닥면이 0이면 주사위 값 복사하고 아니면 주사위에 바닥면 복사
void Check(int sx, int sy, int idx)
{
    if (map[sx][sy] == 0)
    {
        map[sx][sy] = dice[idx];
    }
    else
    {
        dice[idx] = map[sx][sy];
        map[sx][sy] = 0;
    }
}

int main()
{
    int n, m, x, y, k;
    cin >> n >> m >> x >> y >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }

    int sx = x;
    int sy = y;
    int idx = 1; // 주사위 바닥면 인덱스
    for (int i = 0; i < k; i++)
    {
        int dir;
        cin >> dir;
        // 주어진 방향으로 이동
        sx += dx[dir];
        sy += dy[dir];

        // 이동 가능한지 판단
        if (sx < 0 || sy < 0 || sx >= n || sy >= m)
        {
            sx -= dx[dir];
            sy -= dy[dir];

            continue;
        }

        // 방향 만큼 이동후 dice[6]에 있는 값을 출력해준다. (1이 바닥면이니 윗면은 6).
        int tmp;
        switch (dir)
        {
            // 동
        case 1:
            tmp = dice[1];
            dice[1] = dice[3];
            dice[3] = dice[6];
            dice[6] = dice[4];
            dice[4] = tmp;
            cout << dice[6] << endl;
            // 나머지 처리
            Check(sx, sy, idx);
            break;
            // 서
        case 2:
            tmp = dice[1];
            dice[1] = dice[4];
            dice[4] = dice[6];
            dice[6] = dice[3];
            dice[3] = tmp;
            cout << dice[6] << endl;
            // 나머지 처리
            Check(sx, sy, idx);
            break;
            // 북
        case 3:
            tmp = dice[1];
            dice[1] = dice[2];
            dice[2] = dice[6];
            dice[6] = dice[5];
            dice[5] = tmp;
            cout << dice[6] << endl;
            // 나머지 처리
            Check(sx, sy, idx);
            break;
            // 남
        case 4:
            tmp = dice[1];
            dice[1] = dice[5];
            dice[5] = dice[6];
            dice[6] = dice[2];
            dice[2] = tmp;
            cout << dice[6] << endl;
            // 나머지 처리
            Check(sx, sy, idx);
            break;
        }
    }
    return 0;
}
