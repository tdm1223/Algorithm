// 4948. 베르트랑 공준
// 2019.05.21
// 에라토스테네스의 체, 구현
#include<iostream>

using namespace std;

int arr[246913];
int main()
{
	// 소수 검출 arr[i]=0이면 i는 소수
	// 최대 범위인 246912까지 계산
	for (int i = 2; i <= 246912; i++)
	{
		for (int j = i + i; j <= 246912; j += i)
		{
			if (arr[j] == 0)
			{
				arr[j] = 1;
			}
		}
	}

	int n;
	while (1)
	{
		cin >> n;
		if (n == 0)
		{
			break;
		}
		int count = 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (arr[i] == 0)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
