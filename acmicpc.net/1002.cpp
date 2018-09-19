// 1002. 터렛
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int t, i, x1, y1, r1, x2, y2, r2;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		//두 중심사이의 거리 계산
		double i = sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
		if(i==0)
		//if (x1 == x2&&y1 == y2)
		{
			if (r1 == r2)
				cout << -1 << endl;
			else
				cout << 0 << endl;
		}
		else
		{
			if ((r1 + r2) > i&&abs(r1 - r2) < i)
				cout << 2 << endl;
			else if ((r1 + r2) == i || abs(r1 - r2) == i)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
	}
	return 0;
}
