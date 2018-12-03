// 1309. 동물원
// 분류 : 다이나믹 프로그래밍
// 2018.12.03
#include<iostream>

using namespace std;

int d[100001]; // d[i] : 우리의 크기가 i일때 사자를 배치하는 경우의수

int main()
{
	int n;
	cin >> n;
	d[0] = 1;
	d[1] = 3; //1.왼쪽에만 한마리, 2.오른쪽에만 한마리, 3.아무것도 채우지 않음.
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] * 2 + d[i - 2];
		d[i] %= 9901;
	}
	cout << d[n] << endl;
	return 0;
}
