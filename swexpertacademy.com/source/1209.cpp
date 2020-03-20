// 1209. Sum
// 2019.07.04
#include<iostream>

using namespace std;

int arr[101][101];
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		int t;
		cin >> t;
		int max = 0;
		for (int j = 0; j < 100; j++)
		{
			fill(arr[j], arr[j] + 100, 0);
		}
		for (int j = 0; j < 100; j++)
		{
			for (int k = 0; k < 100; k++)
			{
				cin >> arr[j][k];
			}
		}
		int sum = 0;
		// 행의 합
		for (int j = 0; j < 100; j++)
		{
			sum = 0;
			for (int k = 0; k < 100; k++)
			{
				sum += arr[j][k];
			}
			if (sum > max)
			{
				max = sum;
			}
		}
		// 열의 합
		for (int j = 0; j < 100; j++)
		{
			sum = 0;
			for (int k = 0; k < 100; k++)
			{
				sum += arr[k][j];
			}
			if (sum > max)
			{
				max = sum;
			}
		}
		// 대각선
		sum = 0;
		for (int j = 0; j < 100; j++)
		{
			sum += arr[j][j];
		}
		if (sum > max)
		{
			max = sum;
		}
		// 대각선
		sum = 0;
		for (int j = 0; j < 100; j++)
		{
			sum += arr[j][99 - j];
		}
		if (sum > max)
		{
			max = sum;
		}
		cout << "#" << i << " " << max << endl;
	}
	return 0;
}
