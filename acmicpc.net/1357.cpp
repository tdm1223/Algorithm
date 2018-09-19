// 1357. 뒤집힌 덧셈
#include<iostream>

using namespace std;

int Rev(int x)
{
	int result = 0;
	while (1)
	{
		int cur = x % 10;
		result += cur;
		x /= 10;
		if (x == 0) break;
		result *= 10;
	}

	return result;
}
int main(void)
{
	int x, y;
	cin >> x >> y;

	cout << Rev(Rev(x)+Rev(y))<< endl;
}
