// 17356. 욱 제
// 2019.09.29
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	double m = double(b - a) / double(400);
	double p = double(1) / (1 + pow(10, m));
	cout << p << endl;
	return 0;
}
