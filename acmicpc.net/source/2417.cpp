// 2417. 정수 제곱근
// 2019.10.09
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long long k;
	cin >> k;
  // 제곱근을 구함
	long long x = sqrt(k);

  // 제곱근을 다시 제곱해서 원래값과 비교해본다
	if (x*x < k)
	{
		cout << x + 1 << endl;
	}
	else
	{
		cout << x << endl;
	}
	return 0;
}
