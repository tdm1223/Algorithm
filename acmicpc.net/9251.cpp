// 9251. LCS
// 2018.10.15
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int d[1001][1001]; //d[i][j] : i,j까지의 LCS 길이
int main()
{
	string a, b;
	cin >> a >> b;

	for (int i = 1; i < a.size() + 1; i++)
	{
		for (int j = 1; j < b.size() + 1; j++)
		{
			if (a[i - 1] == b[j - 1]) //두 문자가 같다면 대각선 +1
			{
				d[i][j] = d[i - 1][j - 1] + 1;
			}
			else //위와 왼쪽 값중 최댓값
			{
				d[i][j] = max(d[i - 1][j], d[i][j - 1]);
			}
		}
	}

	cout << d[a.size()][b.size()] << endl;
	return 0;
}
