// 2525. 인공지능 시계
// 2018.12.08
#include<iostream>

using namespace std;

int main()
{
	int A, B, time;
	cin >> A >> B>> time;
	B += time;
	A += B / 60;
	cout << A % 24 << " " << B % 60  << endl;
	return 0;
}
