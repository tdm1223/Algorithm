#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[2][100001];
int a[2][100001];
int main() 
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}

		for (int i = 0; i < n; i++)
		{
			//1 2 3 4
			//5 6 7 8
			//4의 경우 
			//1. 7과 4의 합 
			//2. 3
			//3. 6과 4의 합중 최대인것
			d[0][i] = max(max(d[0][i - 1], d[1][i - 1] + a[0][i]), d[1][i - 2] + a[0][i]);
			d[1][i] = max(max(d[1][i - 1], d[0][i - 1] + a[1][i]), d[0][i - 2] + a[1][i]);
		}

		cout << max(d[0][n - 1], d[1][n - 1]) << endl;
	}
}