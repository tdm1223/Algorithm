#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	sum -= (n - 1);

	cout << sum << endl;
	delete arr;
	return 0;
}