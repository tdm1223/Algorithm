// 2750. 수 정렬하기
// 2019.04.07
#include<iostream>
#include<string>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int num[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (num[i] > num[j])
			{
				int tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << num[i] << endl;
	}
	return 0;
}
