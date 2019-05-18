// 1343. 폴리오미노
// 2019.05.18
// 그리디 알고리즘
#include<iostream>
#include<string>

using namespace std;

string ans="";
bool flag=true;
void Calc(int cnt) // 폴리오미노를 덮는 함수
{
  int tmp = cnt;
  // 폴리오미노로 덮을 수 없는 경우
  if(cnt%2==1)
  {
    flag=false;
    return;
  }
  // 폴리오미노로 덮을 수 있는 경우
  // 사전순으로 출력하는것이므로 4칸일땐 AAAA, 2칸일땐 BB를 저장한다.
  while(tmp>0)
  {
    for(int i=0;i<tmp/4;i++) // AAAA로 덮을때
    {
      ans+="AAAA";
    }
    tmp%=4;
    for(int i=0;i<tmp/2;i++) // BB로 덮을 때
    {
      ans+="BB";
    }
    tmp%=2;
  }
}
int main()
{
  string s;
  cin>>s;

  int cnt=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='X') // X의 개수 저장
    {
      cnt++;
      if(i==s.size()-1)
      {
        // 끝이라면 폴리오미노를 덮음
        Calc(cnt);
      }
    }
    else if(s[i]!='X')
    {
      if(cnt!=0)
      {
        Calc(cnt);
        cnt=0;
        ans+='.';
      }
      else
      {
        ans+='.';
      }
    }
  }
  if(flag)
  {
    cout<<ans<<endl;
  }
  else
  {
    cout<<"-1"<<endl;
  }
  return 0;
}
