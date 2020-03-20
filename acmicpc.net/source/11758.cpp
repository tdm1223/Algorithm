// 11758. CCW
// 2019.09.12
// 구현, CCW
#include<iostream>

using namespace std;

// 세 좌표로 삼각형의 넓이를 구하는 공식 사용
// 넓이가 0보다 크면 반시계, 0이면 일직선, 0보다 작으면 시계 방향
int ccw(int x1, int y1, int x2, int y2, int x3, int y3)
{
	int tmp = x1 * y2 + x2 * y3 + x3 * y1;
	tmp = tmp - y1 * x2 - y2 * x3 - y3 * x1;
	if (tmp > 0)
	{
		return 1;
	}
	else if (tmp < 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << ccw(x1, y1, x2, y2, x3, y3) << endl;
	return 0;
}
