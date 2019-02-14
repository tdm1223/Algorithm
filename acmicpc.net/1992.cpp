// 1992. 쿼드트리
// 2019.02.12
#include<iostream>
#include<string>

using namespace std;

string ans = "";
int map[65][65];
void Divide(int size, int x, int y)
{
  if (size == 1)
  {
    if (map[x][y] == 1)
    {
      ans+='1';
      return;
    }
    else
    {
      ans+='0';
      return;
    }
  }
  //  분할된 곳의 좌상단의 값을 저장
  int tmp = map[x][y];
  for (int i = x; i < x + size; i++)
  {
    for (int j = y; j < y + size; j++)
    {
      if (map[i][j] != tmp)
      {
        ans+='(';
        // 4개로 분할
        Divide(size / 2, x, y);
        Divide(size / 2, x, y + size / 2);
        Divide(size / 2, x + size / 2, y);
        Divide(size / 2, x + size / 2, y + size / 2);
        ans+=')';
        return;
      }
    }
  }
  // 모두 같은 숫자일땐 값을 추가해줌
  if (tmp == 1)
  {
    ans+='1';
  }
  else
  {
    ans+='0';
  }
}

int main()
{
  int n;
  cin>>n;
  int size = n;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    for(int j=0;j<n;j++)
    {
      map[i][j]=s[j]-'0';
    }
  }

  Divide(n,0,0);
  cout<<ans<<endl;
  return 0;
}
