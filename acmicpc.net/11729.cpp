// 하노이 탑 이동 순서
// 2019.05.22
// 분할정복
#include<iostream>

using namespace std;

// cin, cout대신 scanf, printf를 써야 시간초과가 나지 않는다.
// 하노이의 탑 함수
void Hanoi(int n, int from, int by, int to)
{
	if (n == 1)
	{
		printf("%d %d\n", from, to);
	}
	else
	{
		Hanoi(n - 1, from, to, by); // n-1개를 from에서 to를 거쳐 by로 옮긴다.
		printf("%d %d\n", from, to);
		Hanoi(n - 1, by, from, to); // n-1개를 by에서 from을 거쳐 to로 옮긴다.
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
