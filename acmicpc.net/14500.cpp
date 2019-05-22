// 14500. 테트로미노
// 2019.05.22
// 브루트 포스
#include<iostream>

using namespace std;

int n,m;
int map[501][501];
int visit[501][501];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int ans;
const int blocks = 4;

// ㅗ 모양은 따로 처리
void go2(int x, int y)
{
  int min = 1001;
  int sum = map[x][y];
  int cnt = 0;
  for(int i=0;i<4;i++)
  {
    int xx = x+dx[i];
    int yy = y+dy[i];

    if(xx<0 || yy<0 || xx>=n || yy>=m)
    {
      continue;
    }

    min = min>map[xx][yy]?map[xx][yy]:min;
    sum += map[xx][yy];
    cnt++;
  }
  if(cnt==4)
  {
    sum-=min;
  }

  if(sum>ans)
  {
    ans=sum;
  }
}

// ㅗ 모양을 제외한 나머지 재귀로 구함.
void go(int x, int y, int value, int cnt)
{
  if(cnt==blocks)
  {
    if(value>ans)
    {
      ans=value;
    }
    return;
  }

  for(int i=0;i<4;i++)
  {
    int xx = x+dx[i];
    int yy = y+dy[i];
    if(xx<0 || yy<0 || xx>=n || yy>=m)
    {
      continue;
    }

    if(!visit[xx][yy])
    {
      visit[xx][yy]=1;
      go(xx,yy,value+map[xx][yy],cnt+1);
      visit[xx][yy]=0;
    }
  }
}
int main()
{
  cin>>n>>m;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>map[i][j];
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      go(i,j,0,0);
      go2(i,j);
    }
  }
  cout<<ans<<endl;
  return 0;
}
