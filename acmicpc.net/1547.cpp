// 1547. 공
// 2019.05.18
// 시뮬레이션
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ball[4] = { 0,1,2,3 };
	for (int i = 0; i < n; i++)
	{
		int x, y, a, b;
		cin >> x >> y;
		// x,y 공을 가지고 있는 인덱스를 찾음
		for (int j = 1; j < 4; j++)
		{
			if (ball[j] == x)
			{
				a = j;
			}
			if (ball[j] == y)
			{
				b = j;
			}
		}
		swap(ball[a], ball[b]);
	}
	cout << ball[1] << endl;
	return 0;
}
