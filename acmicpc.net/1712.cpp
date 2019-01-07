// 1712. 손익분기점
// 2019.01.07
#include<iostream>

using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;

  // a + bx < cx인 x의 최솟값을 구하면 된다.

  // 손익 분기점이 없는 경우
  if(c-b<=0)
  {
    cout<<-1<<endl;
  }
  // 손익 분기점이 존재하는 경우
  else
  {
    cout<<a/(c-b)+1<<endl;
  }
  return 0;
}
