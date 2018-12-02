// 1551. 수열의 변화
// 2018.12.02
#include<iostream>

using namespace std;

int a[21];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		char comma;
		if (i == n - 1)
		{
			cin >> a[i];
		}
		else
		{
			cin >> a[i] >> comma;
		}
	}
	// k번 반복하여 계차 수열을 구함
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			a[j] = a[j + 1] - a[j];
		}
	}
	// 출력
	for (int i = 0; i < n - k; i++)
	{
		// 마지막수는 그냥 출력
		if (i == n - k - 1)
		{
			cout << a[i];
		}
		// 그 이전의 수는 출력후 comma 출력
		else
		{
			cout << a[i] << ",";
		}
	}
	return 0;
}
