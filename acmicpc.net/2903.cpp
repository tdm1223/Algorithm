// 2903. 중앙 이동 알고리즘
// 2019.02.02
#include<iostream>

using namespace std;

int d[16];
int main()
{
	int n;
	cin >> n;
	// 1->9
	// 2->25
	// 3->81
	// i 번째는 i-1번째의 값에서 1을 뺀것과 i-1번째의 항을 더한 값이다.
	d[1] = 3;
	d[2] = 5;
	// 미리 1~15 저장
	for (int i = 3; i < 16; i++)
	{
		d[i] = (d[i - 1] - 1) + d[i - 1];
	}
	cout << d[n] * d[n] << endl;
	return 0;
}
