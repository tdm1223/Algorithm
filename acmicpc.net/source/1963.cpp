// 1963. 소수 경로
// 2019.05.19
// BFS, 소수
#include<iostream>
#include<vector>
#include<queue>
#include<string>

using namespace std;

vector<int> prime;
int arr[10000];
int dist[10000];
int visit[10000];

// 테스트케이스들에 대해 초기화 하는 함수
void Init()
{
  for(int i=0;i<10000;i++)
  {
    arr[i]=0;
    dist[i]=10000;
    visit[i]=0;
  }
}

// original에서 한자리만을 바꿔 이동할 수 있는 소수들을 반환하는 함수
vector<int> Find(int original)
{
  vector<int> tmp;
  for(int i=0;i<prime.size();i++)
  {
    int a = prime[i];
    int originalA = a;
    int b = original;
    int cnt = 0;
    for(int j=0;j<4;j++)
    {
      int tmpA = a%10;
      int tmpB = b%10;
      if(tmpA!=tmpB)
      {
        cnt++;
        if(cnt==2)
        {
          break;
        }
      }
      a/=10;
      b/=10;
    }
    if(cnt==1)
    {
      tmp.push_back(originalA);
    }
  }
  return tmp;
}

int main()
{
  int t;
  cin>>t;

  // 2부터 9999까지 소수를 구하고 저장
  for(int i=2;i<=9999;i++)
  {
    if(arr[i]==1)
    {
      continue;
    }
    for(int j=i+i;j<=9999;j+=i)
    {
      arr[j]=1;
    }
  }
  for(int i=1000;i<=9999;i++)
  {
    if(arr[i]==0)
    {
      prime.push_back(i);
    }
  }

  for(int i=0;i<t;i++)
  {
    Init();
    int a,b;
    cin>>a>>b;

    // 둘이 같다면 최소횟수 0 출력
    if(a==b)
    {
      cout<<0<<endl;
      continue;
    }

    queue<int> q;
    dist[a]=0;
    q.push(a);
    while(!q.empty())
    {
      int front = q.front();
      q.pop();
      for(int i=0;i<Find(front).size();i++)
      {
        if(visit[Find(front)[i]]==0) // 방문하지 않았다면
        {
          if(dist[Find(front)[i]]>dist[front]+1) // 거리는 최솟값으로 갱신
          {
            dist[Find(front)[i]] = dist[front]+1;
          }
          q.push(Find(front)[i]); // 큐에 넣음
          visit[Find(front)[i]] = 1; // 방문
        }
      }
    }

    if(dist[b]==10000)
    {
      cout<<"Impossible"<<endl;
    }
    else
    {
      cout<<dist[b]<<endl;
    }
  }

  return 0;
}
