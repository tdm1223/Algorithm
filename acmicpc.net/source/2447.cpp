// 2447. 별 찍기 - 10
// 2019.05.20
// 별 찍기
#include<iostream>

using namespace std;

char map[2201][2201];
void MakeStar(int x, int y, int num)
{
	if (num == 1)
	{
		map[x][y] = '*';
		return;
	}

	int div = num / 3;

	// 자기 자신을 제외한 인접한 8방향
	MakeStar(x, y, div);
	MakeStar(x, y + div, div);
	MakeStar(x, y + div * 2, div);

	MakeStar(x + div, y, div);
	MakeStar(x + div, y + div * 2, div);

	MakeStar(x + div * 2, y, div);
	MakeStar(x + div * 2, y + div, div);
	MakeStar(x + div * 2, y + div * 2, div);
}

int main()
{
	int n;
	cin >> n;
	MakeStar(0, 0, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == '*')
			{
				cout << map[i][j];
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
