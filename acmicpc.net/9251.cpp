// 9251. LCS
#include<iostream>
#include<string>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[1001][1001];

int main()
{
	string a, b;
	cin >> a >> b;

	for (int i = 1; i < a.size() + 1; i++)
	{
		for (int j = 1; j < b.size() + 1; j++)
		{
			if (a[i - 1] == b[j - 1]) //두 문자가 같다면 대각선 +1
				d[i][j] = d[i - 1][j - 1] + 1;
			else //위와 왼쪽 값중 최댓값
				d[i][j] = max(d[i - 1][j], d[i][j - 1]);
		}
	}

	cout << d[a.size()][b.size()];
	return 0;
}
