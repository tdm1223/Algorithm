// 11966. 2의 제곱인가?
// 2019.05.22
// 수학
#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  bool flag = true;
  // 2의 제곱인지 2로 나누면서 판별
  while(n>0)
  {
    // 나누는 과정에서 나머지가 1이 나온다면 2의 배수가 아님
    if(n%2==1)
    {
      flag=false;
      break;
    }
    n/=2;
  }
  if(flag || n==1)
  {
    cout<<1<<endl;
  }
  else
  {
    cout<<0<<endl;
  }
  return 0;
}
