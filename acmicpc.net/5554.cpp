// 5554. 심부름 가는 길
// 2018.10.15
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	//sum : 모든 시간을 더함(분으로 나타낸 상태)
	int sum = a + b + c + d;

	cout << sum/60 << endl << sum%60 << endl;
	return 0;
}
