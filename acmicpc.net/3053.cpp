// 3053. 택시 기하학
// 2018.12.08
#include<iostream>

using namespace std;
#define PI 3.14159265358979323846

int main()
{
	double r;
	cin >> r;

	// 소수점 여섯째 자리까지 출력하도록 설정
	cout << fixed;
	cout.precision(6);
	cout << r * r * PI << endl;
	cout << r * r * 2.0f << endl;
	return 0;
}
