// 2851. 슈퍼마리오
// 2019.05.20
// 구현
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
	// 버섯들을 먹으면서 합이 100에 가깝게 해줌
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
