// 2851. 슈퍼마리오
// 2018.10.15
#include<iostream>

using namespace std;

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
		if (sum == 100)
		{
			break;
		}
		if (sum > 100)
		{
			if (sum - 100 <= 100 - (sum - arr[i]))
			{
				break;
			}
			else
			{
				sum -= arr[i];
				break;
			}
		}
	}

	cout << sum << endl;
	return 0;
}
