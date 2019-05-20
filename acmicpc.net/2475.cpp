// 2475. 검증수
// 2019.05.20
// 입문용
#include<iostream>

using namespace std;

int main()
{
  int arr[5];
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }

  int sum = 0;
  for(int i=0;i<5;i++)
  {
    sum+=arr[i]*arr[i];
  }
  cout<<sum%10<<endl;
  return 0;
}
