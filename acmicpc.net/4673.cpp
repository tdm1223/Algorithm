// 4673. 셀프 넘버
// 2018.10.23
#include <iostream>

using namespace std;

int d[10001];
//셀프넘버 판별 함수
int CheckSelfNumber(int n)
{
	int sum = n;    //자기 자신을 먼저 더해주고
	while (1)
	{
		// 각 자리수의 숫자를 더해야하므로 1의 자리를 계속 더해준다.
		if (n == 0)
		{
			break;
		}
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		d[CheckSelfNumber(i)] = 1;
		if (d[i]==0)//셀프넘버 출력
		{
			cout << i << endl;
		}
	}
  return 0;
}
