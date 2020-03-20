// 2525. 오븐 시계
// 2019.05.20
// 입문용
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
