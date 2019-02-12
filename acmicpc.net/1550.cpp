// 1550. 16진수
// 2019.02.11
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
  map<char, int> m;

  m['0']=0;
  m['1']=1;
  m['2']=2;
  m['3']=3;
  m['4']=4;
  m['5']=5;
  m['6']=6;
  m['7']=7;
  m['8']=8;
  m['9']=9;
  m['A']=10;
  m['B']=11;
  m['C']=12;
  m['D']=13;
  m['E']=14;
  m['F']=15;

  string s;
  cin>>s;
  int ans = 0;
  int tmp = 1; // 곱해지는 수
  for(int i=s.size()-1;i>=0;i--)
  {
    ans+=m[s[i]]*tmp;
    tmp*=16;
  }
  cout<<ans<<endl;
}
