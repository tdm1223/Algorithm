// 1325. 효율적인 해킹
// 2019.05.18
// DFS, BFS
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int dist[10001];
bool visit[10001];
void Init()
{
  for(int i=0;i<10001;i++)
  {
    visit[i]=0;
  }
}
int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>> map(n+1);
  for(int i=0;i<m;i++)
  {
    int x, y;
    cin>>x>>y;
    // 단방향 그래프이므로 공간을 낭비하지않고 벡터에 값을 넣어주는 형태로 저장
    map[y].push_back(x);
  }

  queue<int> q;
  for(int i=1;i<=n;i++)
  {
    Init();
    q.push(i);
    visit[i]=1;
    while(!q.empty())
    {
      int front = q.front();
      q.pop();
      for(int j=0;j<map[front].size();j++)
      {
        if(!visit[map[front][j]])
        {
          visit[map[front][j]]=1;
          dist[i]++;
          q.push(map[front][j]);
        }
      }
    }
  }

  // 해킹할 수 있는 갯수가 가장 많은 것을 찾아서 차례대로 출력
  int maxDist = 0;
  for(int i=1;i<=n;i++)
  {
    if(dist[i]>maxDist)
    {
      maxDist=dist[i];
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(dist[i]==maxDist)
    {
      printf("%d ",i);
    }
  }
  printf("\n");
  return 0;
}
