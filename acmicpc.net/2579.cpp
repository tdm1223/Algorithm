#include <iostream>
#include<math.h>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int n;
	cin >> n;
	int * a = new int[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	//d[n] : n번째 계단 까지 점수의 최대값
	int * d = new int[n];
	d[0] = a[0];
	d[1] = max(a[0] + a[1], a[1]);
	d[2] = max(a[0] + a[2], a[1] + a[2]);

	for (int i = 3; i < n; i++)
	{
		d[i] = max(d[i - 2] + a[i], d[i - 3] + a[i - 1] + a[i]);
	}
	cout << d[n - 1] << endl;

	delete a;
	delete d;
	return 0;
}