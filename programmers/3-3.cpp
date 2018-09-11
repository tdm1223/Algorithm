// 거스름돈
#include <string>
#include <vector>

using namespace std;
int d[100001];
int solution(int n, vector<int> money)
{
      for(int i=0; i<=n; i++)
      {
          d[i] = (i % money[0] == 0) ? 1 : 0;
      }

      for(int i=1; i<money.size(); i++)
      {
          for(int j=money[i]; j<=n; j++)
          {
              d[j] += d[j-money[i]];
              d[j]%=1000000007;
          }
      }
      return d[n];
}
