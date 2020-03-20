// 3076. 상근이의 체스판
// 2019.06.26
// 문자열처리, 반복문
#include<iostream>
#include<string>

using namespace std;

int main()
{
  int r,c,a,b;
  cin>>r>>c>>a>>b;
  for(int i=1;i<=r;i++)
  {
    string s="";
    for(int j=1;j<=c;j++)
    {
        if((i%2==1 && j%2==1) || (i%2==0 && j%2==0))
        {
          for(int i=1;i<=b;i++)
          {
            s+='X';
          }
        }
        else
        {
          for(int i=1;i<=b;i++)
          {
            s+='.';
          }
        }
    }
    for(int i=0;i<a;i++)
    {
        cout<<s<<endl;
    }
  }
  return 0;
}
