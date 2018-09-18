// 4948. 베르트랑 공준
#include <iostream>

using namespace std;

int arr[246913];
int main()
{
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
		if (n == 0) break;
		int count = 0;
		for (int i = n+1; i <= 2 * n; i++)
		{
			if (arr[i] == 0)
			{
				count++;
			}
		}
		cout << count << endl;
	}
}
