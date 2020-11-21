// 17406. 배열 돌리기 4
// 2020.11.22
// 시뮬레이션
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

// (x,y)의 크기가 size인 회전
struct hole
{
    int x;
    int y;
    int size;
};

int map[51][51]; // 원래 배열
int copyMap[51][51]; // 회전할 배열
int n, m, k;
int ans = 987654321;
vector<hole> holes(k); // 회전 하는것들을 저장하는 배열
int visit[8];
int ch[8];
deque<int> dq;

void rotate(hole& hole)
{
    for (int i = hole.size; i >= 1; i--)
    {
        // 좌상단 -> 우상단-1
        for (int j = hole.y - i; j < hole.y + i; j++)
        {
            dq.push_back(copyMap[hole.x - i][j]);
        }
        // 우상단 -> 우하단-1
        for (int j = hole.x - i; j < hole.x + i; j++)
        {
            dq.push_back(copyMap[j][hole.y + i]);
        }
        // 우하단 -> 좌하단+1
        for (int j = hole.y + i; j > hole.y - i; j--)
        {
            dq.push_back(copyMap[hole.x + i][j]);
        }
        // 좌하단 -> 좌상단+1
        for (int j = hole.x + i; j > hole.x - i; j--)
        {
            dq.push_back(copyMap[j][hole.y - i]);
        }

        dq.push_front(dq.back());
        dq.pop_back();

        // 좌상단 -> 우상단-1
        for (int j = hole.y - i; j < hole.y + i; j++)
        {
            copyMap[hole.x - i][j] = dq.front();
            dq.pop_front();
        }
        // 우상단 -> 우하단-1
        for (int j = hole.x - i; j < hole.x + i; j++)
        {
            copyMap[j][hole.y + i] = dq.front();
            dq.pop_front();
        }
        // 우하단 -> 좌하단+1
        for (int j = hole.y + i; j > hole.y - i; j--)
        {
            copyMap[hole.x + i][j] = dq.front();
            dq.pop_front();
        }
        // 좌하단 -> 좌상단+1
        for (int j = hole.x + i; j > hole.x - i; j--)
        {
            copyMap[j][hole.y - i] = dq.front();
            dq.pop_front();
        }
    }
}

// 선택하는 함수 k!번 실행됨
void go(int cnt)
{
    // 모두 선택
    if (cnt == k)
    {
        // 회전할 배열을 원래 배열로 초기화
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                copyMap[i][j] = map[i][j];
            }
        }
        // hole의 개수만큼 hole에 맞춰 회전시킴
        for (int i = 0; i < k; i++)
        {
            rotate(holes[ch[i]]);
        }
        // 배열 값 계산
        for (int i = 0; i < n; i++)
        {
            int tmp = 0;
            for (int j = 0; j < m; j++)
            {
                tmp += copyMap[i][j];
            }
            ans = min(ans, tmp);
        }
        return;
    }
    // 선택
    for (int i = 0; i < k; i++)
    {
        if (!visit[i])
        {
            visit[i] = 1;
            ch[cnt] = i;
            go(cnt + 1);
            visit[i] = 0;
        }
    }
}

int main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }

    holes.resize(k);
    for (int i = 0; i < k; i++)
    {
        int x, y, size;
        cin >> x >> y >> size;
        holes[i] = { x - 1,y - 1,size };
    }

    go(0);
    cout << ans << endl;
    return 0;
}
