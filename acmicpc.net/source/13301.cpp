// 13301. 타일 장식물
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

long long d[81]; // d[i] : i개의 타일이 구성하는 타일 장식물 직사각형의 둘레
int main()
{
	int n;
	cin >> n;
	d[1] = 4;
	d[2] = 6;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << d[n] << endl;
	return 0;
}
