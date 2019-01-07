// 12865. 평험한 배낭
// 2019.01.07
#include<iostream>

using namespace std;

int w[101];
int v[101];
int d[101][100001]; // d[i][j] : i번째항목까지 넣었을때 무게가 j인 배낭의 최대 가치

int main()
{
  int n, k;
  cin>>n>>k;

  for (int i = 1; i <= n; i++)
  {
    cin>>w[i]>>v[i];
  }

  for (int i = 1; i <= n; i++) // 모든 물품에 대해 반복
  {
    for (int j = 0; j <= k; j++) // 가방에 무게를 0부터 k까지 증가시키면서 반복
    {
      if (w[i] > j) // 가방에 넣을 수 없을 때
      {
        d[i][j] = d[i - 1][j];
      }
      else // 가방에 넣을 수 있을 때
      {
        d[i][j]=max(d[i - 1][j] ,(d[i - 1][j - w[i]] + v[i]));
      }
    }
  }

  cout<<d[n][k]<<endl;
  return 0;
}
