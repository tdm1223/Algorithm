// 10974. 모든 순열
// 2019.05.22
// 수학
#include<iostream>

using namespace std;

int arr[9];
int visit[9];
int n;
// 브루트 포스 방법으로 순열 구하기
void Permutation(int cnt)
{
  if(cnt==n)
  {
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
    return;
  }

  for(int i=0;i<n;i++)
  {
    if(!visit[i])
    {
      visit[i]=1;
      arr[cnt]=i+1;
      Permutation(cnt+1);
      visit[i]=0;
    }
  }
}

int main()
{
  cin>>n;
  Permutation(0);
  return 0;
}
