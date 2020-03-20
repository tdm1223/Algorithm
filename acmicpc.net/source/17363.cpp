// 17363. 우유가 넘어지면?
// 2019.07.29
// 구현
#include<iostream>

using namespace std;

char map[101][101];
// 문제에서 주어진 대로 변환
char Change(char c)
{
	switch (c)
	{
	case 'O':
		return 'O';
	case '-':
		return '|';
	case '|':
		return '-';
	case '/':
		return '\\';
	case '\\':
		return '/';
	case '^':
		return '<';
	case '<':
		return 'v';
	case 'v':
		return '>';
	case '>':
		return '^';
	default:
		return '.';
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			cout << Change(map[j][i]);
		}
		cout << endl;
	}
	return 0;
}
