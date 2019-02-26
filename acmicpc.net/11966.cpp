// 11966. 2의 제곱인가?
// 2019.02.26
#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  bool flag = true;
  while(n>0)
  {
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
