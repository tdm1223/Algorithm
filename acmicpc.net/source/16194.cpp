// 16194. 카드 구매하기 2
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>
#include<algorithm>

using namespace std;

int a[1001]; // a[i] : i개의 가격
int d[1001]; // d[i] : i개를 구매헀을때 카드 가격의 최솟값
int main()
{
	int n;
	cin >> n;
	// 입력
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i] = a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			d[i] = min(d[i], d[i - j] + a[j]);
		}
	}
	// 결과 출력
	cout << d[n] << endl;
	return 0;
}
