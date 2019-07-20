// 2991. 사나운 개
// 2019.07.20
// 나머지 연산, 구현
#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int sumA = a + b;
	int sumB = c + d;

	for (int i = 0; i < 3; i++)
	{
		int k;
		cin >> k;
		int cnt = 0;
		int x = k % sumA;
		int y = k % sumB;
		if (0 < x&&x <= a)
		{
			cnt++;
		}
		if (0 < y&&y <= c)
		{
			cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
