#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[10001]; //d[n] : n번째 까지 포도주를 먹었을때 최댓값
int a[10001];
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	d[1] = a[1];
	d[2] = max(a[2], a[1] + a[2]);
	d[3] = max(a[1] + a[2], max(a[2] + a[3], a[1] + a[3]));
	for (int i = 4; i <= n; i++)
	{
		// 1. a[i]를 포함하는 경우 
		// d[i-2] + a[i] , d[i-3] + a[i-1] + a[i]중 최댓값
		// 2. a[i]를 포함하지 않는 경우
		// d[i-1]
		// 두 경우 중 최댓값을 구한다.
		d[i] = max(max(a[i] + d[i - 2], d[i - 3] + a[i - 1] + a[i]), d[i - 1]);
	}

	cout << d[n] << endl;
	return 0;
}