// 11653. 소인수 분해
// 2019.03.08
#include<iostream>
#include<set>

using namespace std;

int arr[10000001];
void Eratos(int n)
{
	if (n <= 1)
	{
		return;
	}

	for (int i = 2; i <= n; i++)
	{
		arr[i] = true;
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (arr[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				arr[j] = false;
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	Eratos(n);

	int tmp = n;
	for (int i = 2; i <= n; i++)
	{
		while (tmp%i == 0&&arr[i]==true)
		{
			cout << i << "\n";
			tmp /= i;
		}
	}
	return 0;
}
