// 9084. 동전
// 2018.10.25
#include<iostream>

using namespace std;

int d[10001]; // d[i] : i원을 만드는 방법의 수
int coin[21];
int main()
{
	int t;
	cin >> t;

	while (t > 0)
	{
		t--;
		int n;
		cin >> n;

		int money;
		for (int i = 0; i < n; i++)
		{
			cin >> coin[i];
		}

		for (int i = 0; i <= 10000; i++)
		{
			d[i] = 0;
		}

		cin >> money; //만들어야 할 금액
		for (int i = 0; i < n; i++)//각 동전에 대해 경우의 수 계산
		{
			d[coin[i]]++; //단독으로 나오는 가짓수

			for (int j = coin[i] + 1; j <= money; j++)
			{
				d[j] += d[j - coin[i]];
			}
		}
		cout << d[money] << endl;
	}

	return 0;
}
