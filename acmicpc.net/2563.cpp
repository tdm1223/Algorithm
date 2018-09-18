// 2563. 색종이
#include <iostream>
using namespace std;

int a[101][101];

int main()
{
	int n, x, y, ans = 0;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		for (int j = y; j < y + 10; j++)
			for (int i = x; i < x + 10; i++)
				a[j][i] = 1;
	}

	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
			if (a[i][j] == 1)
				ans++;

	cout << ans << endl;
}
