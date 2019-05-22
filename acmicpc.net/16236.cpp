// 16236. 아기상어
// 2019.05.22
// BFS
#include<iostream>
#include<queue>

using namespace std;

int n;
int map[21][21];
bool visit[21][21];
int dist[21][21];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
int babySize = 2; // 상어의 크기
int cnt = 0; // 상어가 먹이를 먹을 횟수
int ans = 0;
// 아기상어의 위치를 나타내는 x,y 좌표
int babyX;
int babyY;
queue<pair<int, int>> q;

// 초기화 함수
void Init()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      dist[i][j] = 0;
      visit[i][j] = false;
    }
  }
  while (!q.empty())
  {
    q.pop();
  }
}

// 아기상어가 물고기 잡아먹는 함수
void Eat(int a, int b)
{
  cnt++;
  if (cnt == babySize)
  {
    babySize++;
    cnt = 0;
  }
  ans += dist[a][b];
  map[babyX][babyY] = 0;
  babyX = a;
  babyY = b;
  map[a][b] = babySize;
}

// 아기상어가 먹을 물고기를 탐색하는 함수
int BFS(int a, int b)
{
  q.push({ a,b });
  visit[a][b] = true;
  dist[a][b] = 0;
  int tmpX = 21;
  int tmpY = 21;
  int d = 10000;
  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int xx = x + dx[i];
      int yy = y + dy[i];

      if (xx < 0 || yy < 0 || xx >= n || yy >= n || map[xx][yy]>map[a][b])
      {
        continue;
      }

      if (!visit[xx][yy])
      {
        visit[xx][yy] = true;
        dist[xx][yy] = dist[x][y] + 1;
        // 먹을 수 있는 물고기이고 물이 아니며 길이가 짧을때
        if (map[xx][yy] < babySize && map[xx][yy] != 0 && d >= dist[xx][yy])
        {
          d = dist[xx][yy];
          if (xx < tmpX)
          {
            tmpX = xx;
            tmpY = yy;
          }
          else if (xx == tmpX && yy < tmpY)
          {
            tmpX = xx;
            tmpY = yy;
          }
        }
        q.push({ xx,yy });
      }
    }
  }
  Eat(tmpX, tmpY);
  if (tmpX == 21 && tmpY == 21)
  {
    return -1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> map[i][j];
      if (map[i][j] == 9)
      {
        q.push({ i,j });
        babyX = i;
        babyY = j;
        visit[i][j] = true;
      }
    }
  }
  while (1)
  {
    // 아기상어 위치의 값을 아기상어의 크기로 바꿈
    map[babyX][babyY] = babySize;
    // 먹을거 탐색
    int tmp = BFS(babyX, babyY);
    if (tmp == -1)
    {
      break;
    }
    Init();
  }
  cout << ans << endl;
  return 0;
}
