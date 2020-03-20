// 4504. 배수 찾기
// 2019.05.21
// 수학
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (1)
	{
		int a;
		cin >> a;
		if (a == 0) // 목록의 끝
		{
			break;
		}
		if (a%n == 0) // 나누어 떨어질때
		{
			cout << a << " is a multiple of " << n << "." << endl;
		}
		else // 나누어 떨어지지 않을때
		{
			cout << a << " is NOT a multiple of " << n << "." << endl;
		}
	}
	return 0;
}
