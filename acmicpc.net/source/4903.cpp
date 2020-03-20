// 4903. Relax! It’s just a game
// 2019.09.05
// 구현, 영어문제
#include<iostream>

using namespace std;

int main()
{
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == -1 && b == -1)
		{
			break;
		}
		// 득점의 경우의 수가 a+b값이 되는 경우는 둘중 하나가 1골을 넣었을때이다.
		// 2:1의 경우 ABB, BAB, BBA 총 3가지가 된다.
		if (a == 1 || b == 1)
		{
			cout << a << "+" << b << "=" << a + b << endl;
		}
		else
		{
			cout << a << "+" << b << "!=" << a + b << endl;
		}
	}
	return 0;
}
