// 1978. 소수 찾기
// 2019.05.19
// 수학, 에라토스테네스의 체
#include<iostream>

using namespace std;

int arr[1001];
int main()
{
	int count = 0;
	int n;
	cin >> n;
	arr[1] = 1;
	// 1부터 1000까지 수 중 소수를 0으로 표시
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = i; j <= 1000; j += i)
		{
			if (arr[j] == 0)
			{
				if (j == i)
				{
					arr[j] = 0;
				}
				else
				{
					arr[j] = 1;
				}
			}
		}
	}

	int k;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (arr[k] == 0)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
