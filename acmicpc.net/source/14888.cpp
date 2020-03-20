// 14888. 연산자 끼워넣기
// 2019.05.22
// 브루트 포스
// https://tdm1223.tistory.com/67
#include<iostream>
#include<stack>

using namespace std;

int arr[101];
int op[4]; //+,-,*,/
int n;
int ansMax=-2100000000;
int ansMin=2100000000;
stack<int> s;

// 계산한 값들에 대한 후처리
void calc(stack<int>& s,int a,int b)
{
  s.pop();
  s.push(b);
  s.push(a);
}
void go(int cnt, int opCode, int value)
{
  if(cnt==n-1)
  {
    if(value>ansMax)
    {
      ansMax=value;
    }
    if(value<ansMin)
    {
      ansMin=value;
    }
    return;
  }

  for(int i=0;i<4;i++)
  {
    if(op[i]>0)
    {
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      // 더하기 일때
      if(i==0)
      {
        s.push(a+b);
        op[i]--;
        go(cnt+1,i,a+b);
        op[i]++;
        calc(s,a,b);
      }
      // 빼기 일때
      else if(i==1)
      {
        s.push(a-b);
        op[i]--;
        go(cnt+1,i,a-b);
        op[i]++;
        calc(s,a,b);
      }
      // 곱하기 일때
      else if(i==2)
      {
        s.push(a*b);
        op[i]--;
        go(cnt+1,i,a*b);
        op[i]++;
        calc(s,a,b);
      }
      // 나누기 일때
      else
      {
        // 음수 처리
        if(a<0)
        {
          s.push(((a*-1)/b)*-1);
        }
        else
        {
          s.push(a/b);
        }
        op[i]--;
        go(cnt+1,i,a/b);
        op[i]++;
        calc(s,a,b);
      }
    }
  }
}

int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<4;i++)
  {
    cin>>op[i];
  }
  // 순서대로 스택에 저장
  for(int i=n-1;i>-1;i--)
  {
    s.push(arr[i]);
  }
  go(0,0,0);
  cout<<ansMax<<endl<<ansMin<<endl;
  return 0;
}
