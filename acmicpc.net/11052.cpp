// 11052. 카드 구매하기
// 2018.10.15
#include<iostream>
#include<algorithm>

using namespace std;

int d[1001]; //d[n] : 카드 n개를 갖기 위해 지불해야 하는 금액의 최댓값
int a[1001];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			d[i] = max(d[i], d[i - j] + a[j]);
		}
	}

	cout << d[n] << endl;
	return 0;
}
