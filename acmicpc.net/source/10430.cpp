// 10430. 나머지
// 2019.05.22
// 입문용
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	// 세수 a,b,c에 대해 문제에서 제시된 값 구하기
	cout << (a + b) % c << endl;
	cout << (a%c + b % c) % c << endl;
	cout << (a*b) % c << endl;
	cout << (a%c*b%c) % c << endl;
	return 0;
}
