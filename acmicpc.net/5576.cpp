#include <iostream>
#include<algorithm>
using namespace std;

int arr1[10];
int arr2[10];
int main(void) {
	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> arr2[i];
	}

	sort(arr1, arr1 + 10);
	sort(arr2, arr2 + 10);

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 7; i < 10; i++)
	{
		sum1 += arr1[i];
		sum2 += arr2[i];
	}

	cout << sum1 << " " << sum2;
	return 0;
}
