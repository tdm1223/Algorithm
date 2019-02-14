// 1780. 종이의 개수
// 2019.02.12
#include<iostream>

using namespace std;

int map[2188][2188];
int num1; // -1의 개수
int num2; // 0의 개수
int num3; // 1의 개수
void Divide(int size, int x, int y)
{
  if (size == 1)
  {
    if (map[x][y] == 1)
    {
      num3++;
      return;
    }
    else if(map[x][y]==0)
    {
      num2++;
      return;
    }
    else
    {
      num1++;
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
        // 9개로 분할
        Divide(size / 3, x, y);
        Divide(size / 3, x, y + size / 3);
        Divide(size / 3, x, y + (size / 3)*2);

        Divide(size / 3, x + size / 3, y);
        Divide(size / 3, x + size / 3, y+(size/3));
        Divide(size / 3, x + size / 3, y+(size/3*2));

        Divide(size / 3, x + (size / 3*2), y  );
        Divide(size / 3, x + (size / 3*2), y + (size / 3));
        Divide(size / 3, x + (size / 3*2), y + (size / 3*2));
        return;
      }
    }
  }
  // 모두 같은 숫자일땐 해당 수의 개수 값을 1더한다.
  if (tmp == 1)
  {
    num3++;
  }
  else if(tmp==0)
  {
    num2++;
  }
  else
  {
    num1++;
  }
}

int main()
{
  int n;
  cin>>n;
  int size = n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>map[i][j];
    }
  }

  Divide(n,0,0);
  cout<<num1<<endl<<num2<<endl<<num3<<endl;
  return 0;
}
