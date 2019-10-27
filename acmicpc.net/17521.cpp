// 17521. Byte Coin
// 2019.10.27
// 구현
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	long long n, w;
	long long count;
	long long price[20];

	cin >> n >> w;

	for (int i = 0; i < n; i++)
	{
		cin >> price[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		// 현재 가격보다 다음날이 비쌀때 판매
		if (price[i] < price[i + 1])
		{
			count = w / price[i];
			w %= price[i];
			count = price[i + 1] * count;
			w += count;
		}
	}

	cout << w << endl;
	return 0;
}
