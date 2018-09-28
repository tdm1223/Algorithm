// 1463. 1로 만들기
#include <iostream>

using namespace std;

int d[1000001]; //d[i] : 정수 i를 1로 만드는 연산 횟수의 최솟값.

int main()
{
	int n;
	cin >> n;
	d[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0)//2로 나누어 떨어질 때
		{
			//2로 나누고 1(횟수)을 더한 값과 i의 값 중 작은것으로 갱신
			d[i] = d[i] > d[i / 2] + 1 ? d[i / 2] + 1 : d[i];
		}
		if (i % 3 == 0)//3으로 나누어 떨어질 때
		{
			//3으로 나누고 1(횟수)을 더한 값과 i의 값 중 작은것으로 갱신
			d[i] = d[i] > d[i / 3] + 1 ? d[i / 3] + 1 : d[i];
		}
	}
	cout << d[n] << endl;
	return 0;
}
