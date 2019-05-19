// 1904. 01타일
// 2018.05.19
// 다이나믹 프로그래밍, 수학
#include<iostream>

using namespace std;

int d[1000001];
int main()
{
	int n;
	cin >> n;
	d[1] = 1;
	d[2] = 2;
	// d[n] : 길이가 n인 모든 2진 수열의 개수 (00과 1로만 구성)
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 15746;
	}
	cout << d[n] << endl;
	return 0;
}
