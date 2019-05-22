// 13565. 침투
// 2019.05.22
// BFS
#include<iostream>
#include<queue>

using namespace std;

int map[1001][1001];
int visit[1001][1001];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      scanf("%1d",&map[i][j]);
    }
  }

  queue<pair<int, int>> q;
  for(int i=0;i<m;i++)
  {
    if(map[0][i]==0)
    {
      map[0][i]=2;
      q.push({0,i});
    }
  }
  // BFS로 침투
  while(!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for(int i = 0; i < 4; i++)
    {
      int xx = x+dx[i];
      int yy = y+dy[i];
      if(xx<0 || yy<0 || xx>=n || yy>=m)
      {
        continue;
      }
      if(!visit[xx][yy] && map[xx][yy]==0)
      {
        visit[xx][yy]=1;
        map[xx][yy]=2;
        q.push({xx,yy});
      }
    }
  }

  bool flag = false;
  for(int i=0;i<m;i++)
  {
    if(map[n-1][i]==2)
    {
      flag=true;
      break;
    }
  }
  // 결과 출력
  if(flag)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}
