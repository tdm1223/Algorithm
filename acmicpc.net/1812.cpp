// 1812. 사탕
// 2019.10.29
// 수학
#include<iostream>

using namespace std;

int arr[1000];
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sum /= 2;
	for (int i = 0; i < n; i++)
	{
		int tmp = 0;
		for (int j = 0; j < n; j += 2)
		{
			tmp += arr[(i + j) % n];
		}
		cout << tmp - sum << endl;
	}
	return 0;
}
