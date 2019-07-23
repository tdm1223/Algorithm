// 2630. 색종이 만들기
// 2019.07.03
// 분할정복
// https://tdm1223.tistory.com/54
#include<iostream>

using namespace std;

int b; // 파란색 색종이 개수
int w; // 하얀색 색종이 개수
int map[129][129];
void go(int n, int startX, int startY)
{
	int color = map[startX][startY];
	for (int i = startX; i < startX + n; i++)
	{
		for (int j = startY; j < startY + n; j++)
		{
      // 색깔과 다르다면 크기를 반으로 줄이고 다시 분할
			if (map[i][j] != color)
			{
				go(n / 2, startX, startY);
				go(n / 2, startX + n / 2, startY);
				go(n / 2, startX, startY + n / 2);
				go(n / 2, startX + n / 2, startY + n / 2);
				return;
			}
		}
	}
  // 맨 처음 색에 따라 색종이 색깔 갯수 증가
	if (color == 1)
	{
		b++;
	}
	else
	{
		w++;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
	go(n, 0, 0);
	cout << w << endl << b << endl;
	return 0;
}
