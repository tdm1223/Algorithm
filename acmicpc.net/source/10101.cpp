// 10101. 삼각형 외우기
// 2019.05.24
// 입문용
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a == 60 && b == 60 && c == 60)
	{
		cout << "Equilateral" << endl;
	}
	else if (a + b + c == 180 && (a == b || b == c || c == a))
	{
		cout << "Isosceles" << endl;
	}
	else if (a + b + c == 180 && (a != b && b != c && c != a))
	{
		cout << "Scalene" << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
	return 0;
}
