// 1002. 터렛
// 2019.05.14
// 기하 알고리즘
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int t, x1, y1, r1, x2, y2, r2;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		//두 중심사이의 거리 계산(공식)
		double dist = sqrt(pow(x1 - x2, 2.0f) + pow(y1 - y2, 2.0f));
		if (dist == 0)
		{
			if (r1 == r2)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else
		{
			if ((r1 + r2) > dist && abs(r1 - r2) < dist)
			{
				cout << 2 << endl;
			}
			else if ((r1 + r2) == dist || abs(r1 - r2) == dist)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
	}

	return 0;
}
