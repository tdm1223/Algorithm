// 6378. 디지털 루트
// 2019.01.03
#include<iostream>
#include<string>

using namespace std;

// 디지털 루트를 만드는 함수
int MakeRoot(int n)
{
  int ans = 0;
  while(n>0)
  {
    ans+=n%10;
    n/=10;
  }
  if(ans<10)
  {
    return ans;
  }
  else
  {
    MakeRoot(ans);
  }
}
int main()
{
  while(1)
  {
    // 수가 최대 1000자리라서 string으로 받는다.
    string s;
    cin>>s;
    if(s[0]-'0'==0)
    {
      break;
    }
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
      ans+=s[i]-'0';
    }

    // 처음 한번 했을때 디지털루트가 완성됬다면 출력하고 아니면 만드는 함수 실행
    if(ans<10)
    {
      cout<<ans<<endl;
    }
    else
    {
      cout<<MakeRoot(ans)<<endl;
    }

  }
  return 0;
}
