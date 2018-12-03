// 1110. 더하기 사이클
// 2018.12.03
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tmp = n;
	int cycle = 0;

	while (1)
	{
		cycle++; // 사이클 증가

		int a = tmp / 10;
		int b = tmp % 10;
		int sum = (a + b) % 10;
		tmp = b * 10 + (a + b) % 10;

		if (tmp == n) // 사이클 종료
		{
			break;
		}
	}

	cout << cycle << endl;
	return 0;
}
