// 16235. 나무 재테크
// 2019.01.22
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, year;
int winter[11][11];
int map[11][11];

struct Tree
{
  int x;
  int y;
  int age;
};

vector<Tree> v;

// 어린순으로 정렬
bool cmp(Tree a, Tree b)
{
  return a.age < b.age;
}

int cnt = 0;

int main()
{
  scanf("%d %d %d", &n, &m, &year);

  //양분입력
  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=n; j++)
    {
      scanf("%d", &winter[i][j]);
      map[i][j] = 5;
    }
  }

  //나무 입력
  for(int i=0; i<m; i++)
  {
    int x, y, age;
    scanf("%d %d %d", &x, &y, &age);
    v.push_back({x, y, age});
  }

  while(year--)
  {
    //나무 정렬
    sort(v.begin(), v.end(), cmp);

    vector<Tree> alive;
    vector<Tree> dead;
    vector<Tree> five;
    vector<Tree> birth;

    // 봄
    for(int i=0; i<v.size(); i++)
    {
      //나무가 굶어 죽는다.
      if(map[v[i].x][v[i].y] < v[i].age)
      {
        dead.push_back({v[i].x, v[i].y, v[i].age});
      }
      //나무가 양분을 먹는다.
      else
      {
        //양분 먹고 나이 증가
        map[v[i].x][v[i].y] -= v[i].age;
        v[i].age++;

        //살아남은 나무 보관
        alive.push_back({v[i].x, v[i].y, v[i].age});

        //5의 배수의 나이를 먹은 나무 보관
        if(v[i].age%5 == 0)
        {
          five.push_back({v[i].x, v[i].y, v[i].age});
        }
      }

    }

    // 여름
    for(int i=0; i<dead.size(); i++)
    {
      // 죽은 나무는 양분이됨.
      int age = dead[i].age;
      int feed = age/2;

      map[dead[i].x][dead[i].y] += feed;
    }

    // 가을
    for(int k=0; k<five.size(); k++)
    {
      int x = five[k].x;
      int y = five[k].y;

      for(int i=0; i<8; i++)
      {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if(xx<1 || xx>n || yy<1 || yy>n)
        {
          continue;
        }

        // 새로 탄생한 나무 추가
        birth.push_back({xx, yy, 1});
      }
    }

    // 겨울
    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=n; j++)
      {
        map[i][j] += winter[i][j];
      }
    }

    v.clear();
    // 생존해있는 나무 v에 추가
    for(int i=0; i<alive.size(); i++)
    {
      v.push_back({alive[i].x, alive[i].y, alive[i].age});
    }

    // 새로 추가된 나무 v에 추가
    for(int i=0; i<birth.size(); i++)
    {
      v.push_back({birth[i].x, birth[i].y, birth[i].age});
    }

    alive.clear();
    birth.clear();
    dead.clear();
    five.clear();

    cnt = v.size();
  }
  printf("%d\n", cnt);
  return 0;
}
