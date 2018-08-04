#include <iostream>
using namespace std;


int min(int a, int b)
{
	return a > b ? b : a;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[101];
int main() {
	int t;
	cin >> t;
	d[0] = 1;
	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	d[4] = 2;
	d[5] = 2;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		for (int i = 6; i <= n; i++)
		{
			d[i] = d[i - 1] + d[i - 5];
		}
		cout << d[n] << endl;
	}
}