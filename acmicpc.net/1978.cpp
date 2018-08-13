#include <iostream>

using namespace std;

int arr[1001];
int main()
{
	int count = 0;
	int n;
	cin >> n;

	//1~1000까지의 소수를 찾는 과정 arr[i]==0이면 i는 소수이다.
	arr[1] = 1;
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
}