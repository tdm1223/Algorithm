// 1145. 적어도 대부분의 배수
// 2019.09.02
// 수학, 탐색
#include<iostream>

using namespace std;

int main()
{
int arr[5];
for (int i = 0; i < 5; i++)
{
  cin >> arr[i];
}
int num = 1;
while (1)
{
  int cnt = 0;
  // 3개이상 나누어 떨어지는지 확인
  for (int i = 0, c = 0; i < 5; i++)
  {
    if (num % arr[i] == 0)
    {
      cnt++;
    }
  }
  if (cnt >= 3)
  {
    cout << num << endl;
    break;
  }
  num++;
}
return 0;
}
