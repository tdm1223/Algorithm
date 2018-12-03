// 1057. 토너먼트
// 분류 : 수학, 시뮬레이션
// 2018.12.03
#include<iostream>

using namespace std;

int main()
{
	int n;
	int a, b;
	int round = 0;

	cin >> n >> a >> b;

	if (n < b || n < a)//서로 대결하지 않을 경우
	{
		round = -1;
	}
	else
	{
		while (b != a)
		{
			b = (b + 1) / 2;
			a = (a + 1) / 2;
			round++;
		}
	}

	cout << round << endl;
	return 0;
}
