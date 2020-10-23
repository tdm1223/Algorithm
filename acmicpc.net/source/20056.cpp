// 20056. 마법사 상어와 파이어볼
// 2020.10.23
// 시뮬레이션
#include<iostream>
#include<queue>
#include<map>

using namespace std;

struct star
{
    int m;
    int s;
    int d;
};

int dx[8] = { -1,-1,0,1,1,1,0,-1 };
int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

vector<star> maps[51][51];
vector<star> tmpMap[51][51];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    star tmp;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> tmp.m >> tmp.s >> tmp.d;
        maps[x][y].push_back(tmp);
    }

    for (int num = 0; num < k; num++)
    {
        // 파이어볼 이동함
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (maps[i][j].size() > 0)
                {
                    for (int k = 0; k < maps[i][j].size(); k++)
                    {
                        star tmp;
                        int d = maps[i][j][k].d;
                        int s = maps[i][j][k].s;
                        int xx = i + dx[d] * s % n;
                        int yy = j + dy[d] * s % n;

                        tmp.d = d;
                        tmp.s = s;
                        tmp.m = maps[i][j][k].m;

                        if (xx > n)
                        {
                            xx -= n;
                        }
                        else if (xx <= 0)
                        {
                            xx += n;
                        }

                        if (yy > n)
                        {
                            yy -= n;
                        }
                        else if (yy <= 0)
                        {
                            yy += n;
                        }
                        tmpMap[xx][yy].push_back(tmp);
                    }
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                maps[i][j] = tmpMap[i][j];
                tmpMap[i][j].clear();
            }
        }

        // 모아진게 있다면 4방향 폭발
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (maps[i][j].size() >= 2)
                {
                    int x = i;
                    int y = j;
                    bool odd = false;
                    bool even = false;

                    int mass = 0;
                    int velocity = 0;

                    for (int starNum = 0; starNum < maps[i][j].size(); starNum++)
                    {
                        mass += maps[i][j][starNum].m;
                        velocity += maps[i][j][starNum].s;

                        if (maps[i][j][starNum].d % 2 == 0)
                        {
                            even = true;
                        }
                        else if (maps[i][j][starNum].d % 2 == 1)
                        {
                            odd = true;
                        }
                    }

                    mass /= 5;
                    // 질량이 0이면 소멸
                    if (mass == 0)
                    {
                        continue;
                    }

                    velocity /= maps[i][j].size();

                    // 두 방향 모두 존재
                    if (odd && even)
                    {
                        for (int i = 1; i <= 7; i += 2)
                        {
                            tmpMap[x][y].push_back({ mass,velocity,i });
                        }
                    }
                    else
                    {
                        for (int i = 0; i <= 6; i += 2)
                        {
                            tmpMap[x][y].push_back({ mass,velocity,i });
                        }
                    }
                }
                else if (maps[i][j].size() == 1)
                {
                    tmpMap[i][j].push_back(maps[i][j][0]);
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                maps[i][j] = tmpMap[i][j];
                tmpMap[i][j].clear();
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (maps[i][j].size() > 0)
            {
                for (int k = 0; k < maps[i][j].size(); k++)
                {
                    ans += maps[i][j][k].m;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
