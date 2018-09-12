//3052. 나머지
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}
	int cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if ((arr[i] == arr[j])&&(arr[i]!=-1&&arr[j]!=-1))
			{
				arr[j] = -1;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] != -1)
			cnt++;
	}
	cout << cnt;
}
