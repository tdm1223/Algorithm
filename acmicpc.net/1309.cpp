//1309. 동물원
#include <iostream>

using namespace std;

int d[100001];

int main()
{
	int n;
	cin >> n;
	d[0] = 1;
	d[1] = 3;
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] * 2 + d[i - 2];
		d[i] %= 9901;
	}
	cout << d[n] << endl;
	return 0;
}
