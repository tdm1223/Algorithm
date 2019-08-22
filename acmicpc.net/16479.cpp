// 16479. 컵라면 측정하기
// 2019.08.22
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	float k, d1, d2;
	cin >> k >> d1 >> d2;
	if (d1 == d2)
	{
		cout << k * k << endl;
	}
	else
	{
		d1 = max(d1, d2);
		d2 = min(d1, d2);
		float x = (d1 - d2) / 2;
		cout << k * k - x * x << endl;
	}
	return 0;
}
