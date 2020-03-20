// 3023. 마술사 이민혁
// 2019.05.21
// 구현
#include<iostream>

using namespace std;

char d[51][51];
char card[102][102];
int main()
{
	int r, c;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> d[i][j];
			card[i][j] = d[i][j];
		}
	}
	int a, b;
	cin >> a >> b;
	// 아래 대칭
	for (int i = r; i < r * 2; i++)
	{
		for (int j = 0; j < c; j++)
		{
			card[i][j] = d[r * 2 - i - 1][j];
		}
	}
	// 오른쪽 대칭
	for (int i = 0; i < r; i++)
	{
		for (int j = c; j < c * 2; j++)
		{
			card[i][j] = d[i][c * 2 - j - 1];
		}
	}
	// 대각선 대칭
	for (int i = r; i < r * 2; i++)
	{
		for (int j = c; j < c * 2; j++)
		{
			card[i][j] = d[r * 2 - i - 1][c * 2 - j - 1];
		}
	}
	if (card[a - 1][b - 1] == '#')
	{
		card[a - 1][b - 1] = '.';
	}
	else
	{
		card[a - 1][b - 1] = '#';
	}
	for (int i = 0; i < r * 2; i++)
	{
		for (int j = 0; j < c * 2; j++)
		{
			cout << card[i][j];
		}
		cout << endl;
	}
	return 0;
}
