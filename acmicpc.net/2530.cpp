// 2530. 인공지능 시계
// 2018.10.15
#include <iostream>

using namespace std;

int main()
{
	int A, B, C, time;
	cin >> A >> B >> C >> time;

	C += time;
	B += C / 60;
	A += B / 60;

	cout << A % 24 << " " << B % 60 << " " << C % 60 << endl;
	return 0;
}
