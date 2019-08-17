// 9020. 골드바흐의 추측
// 2019.08.17
// 수학
#include<iostream>

using namespace std;

// 소수 구하기
bool isPrime[10001];
void check()
{
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i <= 10000; i++)
	{
		for (int j = i * i; j <= 10000; j += i)
		{
			if (isPrime[j])
			{
				isPrime[j] = false;
			}
		}
	}
}

int main()
{
	fill(isPrime, isPrime + 10000, true);
	check();
	int t;
	cin >> t;

	while (t-- > 0)
	{
		int n;
		cin >> n;

		int a = 0;
		int b = 0;
		// n/2까지 중단없이 진행하면
		// 두 소수의 차이가 가장 작은 것이 된다.
		for (int i = 2; i <= n/2; i++)
		{
			int tmp = n;
			if (isPrime[i])
			{
				tmp -= i;
				if (isPrime[tmp])
				{
					a = i;
					b = tmp;
				}
			}
		}
		cout << a << " " << b << endl;
	}
	return 0;
}
