// 2210. 숫자판 점프
// 2021.10.27
// 브루트 포스
#include<iostream>
#include<set>

using namespace std;

int maps[5][5];
set<int> sets;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void go(int cnt, int x, int y, int num)
{
    if (cnt == 6)
    {
        sets.insert(num);
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if (xx < 0 || yy < 0 || xx >= 5 || yy >= 5)
        {
            continue;
        }

        int afterNum = num * 10 + maps[xx][yy];
        go(cnt + 1, xx, yy, afterNum);
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> maps[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            go(0, i, j, 0);
        }
    }

    cout << sets.size() << endl;
    return 0;
}
