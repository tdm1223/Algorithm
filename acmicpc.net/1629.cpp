// 1629. 곱셈
// 2019.01.07
#include<iostream>

using namespace std;

// a의 b승을 c로 나눈 나머지를 반환하는 함수
long long power(long long a, long long b, long long c)
{
  if (b == 0)
  {
    return 1;
  }
  int tmp = power(a, b/2,c);
  int result = (long long)tmp * tmp % c;

  // 홀수이면 n을 한 번 더 곱해준다.
  if(b%2==1)
  {
    result = (long long)result * a % c;
  }

  return result;
}

int main()
{
  long long a, b, c;
  cin >> a >> b >> c;

  cout << power(a, b, c) << endl;
  return 0;
}
