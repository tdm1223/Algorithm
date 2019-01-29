// 9546. 3000번 버스
// 2019.01.29
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int t, k;
  cin >> t;
  while (t > 0)
  {
    t--;
    cin >> k;
    int ans = 0;
    if (k == 1) // 정거장이 1개면 손님은 1명
    {
      ans = k;
    }
    else // 정거장이 k개면 손님은 2^k-1명
    {
      ans = pow(2,k)-1;
    }
    cout << ans << endl;
  }

  return 0;
}
