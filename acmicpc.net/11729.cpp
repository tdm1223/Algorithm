// 하노이 탑 이동 순서
// 분류 : 분할정복
// 2018.11.18
#include <iostream>

using namespace std;

//cin, cout대신 scanf, printf를 써야 시간초과가 나지 않는다.
void Hanoi(int n, int from, int by, int to)
{
	if (n == 1)
	{
		printf("%d %d\n", from, to);
	}
	else
	{
		Hanoi(n - 1, from, to, by);
		printf("%d %d\n", from, to);
		Hanoi(n - 1, by, from, to);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	// 이동 횟수 : 2의n승 - 1
	cout << (1 << n) - 1 << endl;
	Hanoi(n, 1, 2, 3);
	return 0;
}
